
/* AUTO-GENERATED by gen_isr_tables.py, do not edit! */

#include <zephyr/toolchain.h>
#include <zephyr/linker/sections.h>
#include <zephyr/sw_isr_table.h>
#include <zephyr/arch/cpu.h>

typedef void (* ISR)(const void *);
uintptr_t __irq_vector_table _irq_vector_table[91] = {
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
	((uintptr_t)&_isr_wrapper),
};
struct _isr_table_entry __sw_isr_table _sw_isr_table[91] = {
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 0 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 1 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 2 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 3 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 4 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 5 */
	{(const void *)0x8009ead, (ISR)0x80030c5}, /* 6 */
	{(const void *)0x8009eab, (ISR)0x80030c5}, /* 7 */
	{(const void *)0x8009ea9, (ISR)0x80030c5}, /* 8 */
	{(const void *)0x8009ea7, (ISR)0x80030c5}, /* 9 */
	{(const void *)0x8009ea5, (ISR)0x80030c5}, /* 10 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 11 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 12 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 13 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 14 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 15 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 16 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 17 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 18 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 19 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 20 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 21 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 22 */
	{(const void *)0x8009ea3, (ISR)0x80030c5}, /* 23 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 24 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 25 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 26 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 27 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 28 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 29 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 30 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 31 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 32 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 33 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 34 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 35 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 36 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 37 */
	{(const void *)0x80083f4, (ISR)0x8007667}, /* 38 */
	{(const void *)0x80083cc, (ISR)0x8007667}, /* 39 */
	{(const void *)0x8009ea1, (ISR)0x80030c5}, /* 40 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 41 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 42 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 43 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 44 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 45 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 46 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 47 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 48 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 49 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 50 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 51 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 52 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 53 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 54 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 55 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 56 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 57 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 58 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 59 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 60 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 61 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 62 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 63 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 64 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 65 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 66 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 67 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 68 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 69 */
	{(const void *)0x80083e0, (ISR)0x8007667}, /* 70 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 71 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 72 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 73 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 74 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 75 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 76 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 77 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 78 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 79 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 80 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 81 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 82 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 83 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 84 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 85 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 86 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 87 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 88 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 89 */
	{(const void *)0x0, (ISR)z_irq_spurious}, /* 90 */
};
