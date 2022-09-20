#ifndef DIO_H

#define DIO_H

#include "../type.h"
#include"../registers.h"

#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1





int DIO_init (uint8_t port_number, uint8_t pin_number , uint8_t direction);

int DIO_write (uint8_t port_number, uint8_t pin_number , uint8_t value);

int DIO_toggle(uint8_t port_number, uint8_t pin_number);

int DIO_read (uint8_t port_number, uint8_t pin_number , uint8_t *value);




#endif