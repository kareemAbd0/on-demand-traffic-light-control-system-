#include"LED.h"



int LED_innit(uint8_t port_number,uint8_t pin_number)
{

if(DIO_init(port_number,pin_number,OUT) == 1)
{
    return 1;
}
else
{
    return 0;
}

}


int LED_on (uint8_t port_number,uint8_t pin_number)
{

if (DIO_write(port_number,pin_number,HIGH) == 1)
{

    return 1;
}
else
{
    return 0 ;
}

}

int LED_off (uint8_t port_number,uint8_t pin_number)
{

if(DIO_write(port_number,pin_number,LOW) == 1)
{
    return 1;
}
else
{
    return 0;
}


}

int LED_toggle (uint8_t port_number,uint8_t pin_number)
{
    
if(DIO_toggle(port_number,pin_number) == 1)
{
   return 1;

}
else
{
    return 0;
}

}





