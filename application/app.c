#include"app.h"




void app_start()
{
     DIO_init('D',2,IN);// the interrupt pin

    interrupt_innit_rising(); //interrupt at rising edge
    interrupt_enable(INT0); //enable interrupt 0

    LED_innit('A',0); // car green
    LED_innit('A',1); // car yellow
    LED_innit('A',2); // car red
    
    LED_innit('B',0); // pedestrian green
    LED_innit('B',1); // pedestrian yellow
    LED_innit('B',2); // pedestrian red

    


while (1)
{

normal_mode();

}


}


ISR(INT0_vect)
{
  LED_off('B',2);
  mode = 1;
//pedestrian_mode();  calling this function may look convenient but it breaks the interrupt as it is very long

}









