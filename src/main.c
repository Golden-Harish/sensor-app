#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main);

int main(void)
{
    const struct device *sensor = DEVICE_DT_GET_ANY(ti_tmag5273);
    struct sensor_value value;

    if (sensor == NULL || !device_is_ready(sensor)) {
        LOG_ERR("TMAG5273 sensor not found or not ready");
        return;
    }

    while (1) {
        
        if (sensor_sample_fetch(sensor) < 0) {
            LOG_ERR("Failed to fetch sensor sample");
            return;
        }

        
        if (sensor_channel_get(sensor, SENSOR_CHAN_MAGN_X, &value) == 0) {
            double magn_x = sensor_value_to_double(&value);
            LOG_INF("Magnetometer X-axis: %lf", magn_x);
        }

        
        if (sensor_channel_get(sensor, SENSOR_CHAN_MAGN_Y, &value) == 0) {
            double magn_y = sensor_value_to_double(&value);
            LOG_INF("Magnetometer Y-axis: %lf", magn_y);
        }

       
        if (sensor_channel_get(sensor, SENSOR_CHAN_MAGN_Z, &value) == 0) {
            double magn_z = sensor_value_to_double(&value);
            LOG_INF("Magnetometer Z-axis: %lf", magn_z);
        }

       
        k_sleep(K_MSEC(1000));
    }
}
