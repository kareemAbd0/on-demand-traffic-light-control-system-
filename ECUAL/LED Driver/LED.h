#ifndef LED_H
#define LED_H
#include"../../MCAL/type.h"
#include"../../MCAL/DIO Driver/DIO.h"


int LED_innit(uint8_t port_number,uint8_t pin_number);
int LED_on (uint8_t port_number,uint8_t pin_number);
int LED_off (uint8_t port_number,uint8_t pin_number);
int LED_toggle (uint8_t port_number,uint8_t pin_number);



#endif