#include"functions.h"

// the typical traffic light system
int normal_mode()
{
color_now = Green;
LED_on('A',0); //green

timer_delay_ms(5000);
 if(mode == 1)
    {   
     pedestrian_mode();
     return 0;

    }

LED_off('A',0); //green
color_now = Yellow;
for (uint8_t i = 0; i < 5; i++)
{
    LED_on('A',1); //yellow   
    timer_delay_ms(500);
    if(mode == 1)
    {   
     pedestrian_mode();
     return 0;

    }

    LED_off('A',1); //yellow
    timer_delay_ms(500);

}


color_now = Red;
LED_on('A',2); //red
timer_delay_ms(5000);
if (mode == 1)
{
  pedestrian_mode();
  return 0;

}
LED_off('A',2); //red

}



// the swithched to mode when the button is pressed
void pedestrian_mode()
{


switch (color_now)
{
case Red:
  LED_on('A',2);
  LED_on('B',0);
  timer_delay_ms(5000);
    break;

case Green:
  
  LED_on('B',2);
  timer_delay_ms(5000);
  for (uint8_t i = 0; i < 5; i++)
  {

    LED_on('A',1); //yellow
    LED_on('B',1); //yellow
    timer_delay_ms(500);
    LED_off('A',1); //yellow
    LED_off('B',1); //yellow
    timer_delay_ms(500);
  }

    LED_off('A',0);
    LED_on('A',2);
    LED_off('B',2);
    LED_on('B',0);

    timer_delay_ms(5000);
  break;


case Yellow:

  LED_on('A',1); 
  LED_on('B',2);
  timer_delay_ms(5000);
  for (uint8_t i = 0; i < 5; i++)
{
    LED_on('A',1); //yellow
    LED_on('B',1); //yellow
    timer_delay_ms(500);
    LED_off('A',1); //yellow
    LED_off('B',1); //yellow
    timer_delay_ms(500);

}
LED_off('A',0);
LED_on('A',2); 
LED_off('B',2);
LED_on('B',0);

timer_delay_ms(5000);
break;



default:
    break;
}


 LED_off('A',2);
 
 for (uint8_t i = 0; i < 5; i++)
{
    LED_on('A',1); //yellow
    LED_on('B',1); //yellow
    timer_delay_ms(500);
    LED_off('A',1); //yellow
    LED_off('B',1); //yellow
    timer_delay_ms(500);

}
LED_off('B',0);
LED_on('B',2);
LED_on('A',0);
mode = 0;

}




