#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/logging/log.h>
#include <zephyr/shell/shell.h>
#include <stdlib.h>

LOG_MODULE_REGISTER(main);

// Define stepper motor parameters
#define STEPS 500
#define STEP_DELAY 10 // Step delay in milliseconds
#define MAX_DATA_POINTS 100 // Maximum data points to collect

#define ZEPHYR_USER_NODE DT_PATH(zephyr_user)

const struct gpio_dt_spec step = GPIO_DT_SPEC_GET(ZEPHYR_USER_NODE, step_gpios);
const struct gpio_dt_spec dir = GPIO_DT_SPEC_GET(ZEPHYR_USER_NODE, dir_gpios);

const struct device *sensor = DEVICE_DT_GET_ANY(ti_tmag5273);

// Structure to store sensor data
struct sensor_data {
    int x;
    int y;
    int z;
};

// Array to store sensor data for each step
struct sensor_data sensor_values[MAX_DATA_POINTS];
int data_count = 0; // Counter to keep track of stored steps

// Function to store sensor data for up to 100 steps
void store_sensor_data(void)
{
    if (data_count >= MAX_DATA_POINTS) {
        LOG_INF("Data collection complete, reached maximum steps of %d", MAX_DATA_POINTS);
        return;
    }

    struct sensor_value value_x, value_y, value_z;

    if (sensor_sample_fetch(sensor) == 0 &&
        sensor_channel_get(sensor, SENSOR_CHAN_MAGN_X, &value_x) == 0 &&
        sensor_channel_get(sensor, SENSOR_CHAN_MAGN_Y, &value_y) == 0 &&
        sensor_channel_get(sensor, SENSOR_CHAN_MAGN_Z, &value_z) == 0) {

        sensor_values[data_count].x = value_x.val1;
        sensor_values[data_count].y = value_y.val1;
        sensor_values[data_count].z = value_z.val1;

        LOG_INF("Stored step %d - X: %d, Y: %d, Z: %d", data_count + 1, 
                sensor_values[data_count].x, 
                sensor_values[data_count].y, 
                sensor_values[data_count].z);

        data_count++;
    }
}

// Function to move motor in specified direction and steps
static int motor_mv_steps(bool bwd, int n)
{
    gpio_pin_set_dt(&dir, bwd); // Set motor direction
    for (int i = 0; i < n; i++) {
        gpio_pin_set_dt(&step, 1); // Pulse step pin high
        k_msleep(STEP_DELAY);
        gpio_pin_set_dt(&step, 0); // Pulse step pin low
        k_msleep(STEP_DELAY);

        if (data_count < MAX_DATA_POINTS) {
            store_sensor_data(); // Store sensor data after each step
        }
    }
    return 0;
}

// Shell command to move motor forward
static int cmd_motor_fwd(const struct shell *sh, size_t argc, char **argv)
{
    char *endptr;
    int n = (int)(strtol)(argv[1], &endptr, 10);
    shell_print(sh, "Motor fwd %d", n);
    motor_mv_steps(false, n); // Move forward
    return 0;
}

// Shell command to move motor backward
static int cmd_motor_bwd(const struct shell *sh, size_t argc, char **argv)
{
    char *endptr;
    int n = (int)(strtol)(argv[1], &endptr, 10);
    shell_print(sh, "Motor bwd %d", n);
    motor_mv_steps(true, n); // Move backward
    return 0;
}

// Define shell commands
SHELL_STATIC_SUBCMD_SET_CREATE(sub_demo,
    SHELL_CMD(fwd, NULL, "Motor towards sensor.", cmd_motor_fwd),
    SHELL_CMD(bwd, NULL, "Motor away from sensor.", cmd_motor_bwd),
    SHELL_SUBCMD_SET_END
);
SHELL_CMD_REGISTER(motor, &sub_demo, "Motor commands", NULL);

// Sensor measurement thread
void sensor_thread(void)
{
    if (sensor == NULL || !device_is_ready(sensor)) {
        LOG_ERR("TMAG5273 sensor not found or not ready");
        return;
    }

    struct sensor_value value;

    while (1) {
        if (sensor_sample_fetch(sensor) < 0) {
            LOG_ERR("Failed to fetch sensor sample");
            continue;
        }

        if (sensor_channel_get(sensor, SENSOR_CHAN_MAGN_X, &value) == 0) {
            LOG_INF("Magnetometer X-axis: %d", value.val1);
        }
        if (sensor_channel_get(sensor, SENSOR_CHAN_MAGN_Y, &value) == 0) {
            LOG_INF("Magnetometer Y-axis: %d", value.val1);
        }
        if (sensor_channel_get(sensor, SENSOR_CHAN_MAGN_Z, &value) == 0) {
            LOG_INF("Magnetometer Z-axis: %d", value.val1);
        }

        k_sleep(K_MSEC(1000)); // Delay for next sensor read
    }
}

// Thread definitions
K_THREAD_DEFINE(sensor_tid, 1024, sensor_thread, NULL, NULL, NULL, 5, 0, 0);

int main(void)
{
    LOG_INF("Stepper motor and TMAG5273 sensor application started");

    gpio_pin_configure_dt(&step, GPIO_OUTPUT_INACTIVE);
    gpio_pin_configure_dt(&dir, GPIO_OUTPUT_INACTIVE);
}

