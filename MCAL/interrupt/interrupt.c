#include "interrupt.h"



int interrupt_innit_rising()
{
  uint8_t state = 1;

 if(state ==1)
 {
  //enable global interrupts
   sei(); 
 // chhose interrupt sense (logic) will make it on rising edge (choice controlled by 2 registers)
  MCUCR |= (1<<ISC00) | (1<<ISC01);
  return 1;
 }
 else
 {
  return 0;
 }
   
  

}

int interrupt_enable(uint8_t inter)
{
//enable external inturrupt
  if((inter <= 7) &&(inter >= 5) )
  {
  GICR |= (1<<inter);
  return 1;
  }
  else
  {
    return 0;
  }
}














