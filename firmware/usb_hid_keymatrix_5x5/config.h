#ifndef CONFIG_H
#define CONFIG_H

#include <libopencm3/stm32/gpio.h>

#define MANUFACTURER_STRING "example co."
#define PRODUCT_STRING "usb hid demo"
#define SERIAL_STRING "00000001"
#define ID_PRODUCT (0x4343)

#define F_CPU (48000000)
#define F_SYS_TICK_CLK (F_CPU/8)

#include "hid_keydef.h"

/* For possible keys, see ../common/hid_keydef.h */

//#define KEYS \
//	KEY('A'), KEY('B'), KEY('C'), KEY('D'), KEY('E'), \
//	KEY('F'), KEY('G'), KEY('H'), KEY('I'), KEY('J'), \
//	KEY('9'), KEY('6'), KEY('3'), KEY('N'), KEY('O'), \
//	KEY('8'), KEY('5'), KEY('2'), KEY('S'), KEY('T'), \
//	KEY('7'), KEY('4'), KEY('1'), KEY('X'), KEY('Y'),

#define KEYS \
	KEY('A'), KEY('B'), KEY('C'), KEY('D'), KEY('E'), \
	KEY('F'), KEY('G'), KEY('H'), KEY('I'), KEY('J'), \
	KEY_KP_3, KEY_KP_6, KEY_KP_9, KEY('N'), KEY('O'), \
	KEY_KP_2, KEY_KP_5, KEY_KP_8, KEY('S'), KEY('T'), \
	KEY_KP_1, KEY_KP_4, KEY_KP_7, KEY('X'), KEY('Y'),

#endif // CONFIG_H
