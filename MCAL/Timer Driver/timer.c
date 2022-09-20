

#include "timer.h"


// 8 bit timer
int timer_delay_ms(int delay)
{
   if (delay >0)
   {
      
   
   

    double overflows = ((delay/1000.0)/( (1.0/F_CPU)*256));
  
    float overflows_count = 0;
    //choose timer mode
    TCCR0 = 0x00;
    //timer intial value
    TCNT0 = 0x00;
    // timer start
    TCCR0 |= (1<<0); // no prescaler

     while (overflows_count < overflows)
  {
     while((TIFR0 & (1<<0)) == 0);
     
     //reset overflow
     TIFR0 |= (1<<0);
     overflows_count++;
  }

   
    // reset timer
     TCCR0 = 0x00;
     return 1;
   }
   else
   {
      return 0;
   }
   



}
