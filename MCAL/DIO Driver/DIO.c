#include "DIO.h"

int DIO_init (uint8_t port_number, uint8_t pin_number , uint8_t direction)
{

  //intialize pin direction

  switch (port_number)
  {
  case 'A':
    
    if (direction == IN)
    {
        DDRA &= ~( 1<< pin_number);
        return 1;
    }
    
   else if (direction == OUT)
   {
      DDRA |= (1<<pin_number);    
      return 1;

   }
    else
   {
    //error handling
    return 0;

   }   
  
    break;

  case 'B':

    if (direction == IN)
    {
        DDRB &= ~( 1<< pin_number);
        return 1;

    }
    
   else if (direction == OUT)
   {
      DDRB |= (1<<pin_number);    
        return 1;

   }
   else
   {
    //error handling
    return 0;

   }   
    break;

  case 'C':

    if (direction == IN)
    {
        DDRC &= ~( 1<< pin_number);
        return 1;

    }
    
   else if (direction == OUT)
   {
      DDRC |= (1<<pin_number);    
        return 1;

   
   }    
   else
   {
    //error handling
            return 0;

   }   
   
    break;   


   case 'D':

    if (direction == IN)
    {
        DDRD &= ~( 1<< pin_number);
                return 1;

    }
    
   else if (direction == OUT)
   {
      DDRD |= (1<<pin_number);    
               return 1;

   }    
  else
   {
    //error handling
            return 0;

   }   
   break;


   default:
    return 0;
    break;

  }

}



int DIO_write (uint8_t port_number, uint8_t pin_number , uint8_t value)
{

 switch (port_number)
  {
  case 'A':
    
    if (value == LOW)
    {
        PORTA &= ~( 1<< pin_number);
                return 1;


    }
    
   else if (value == OUT)
   {
      PORTA|= (1<<pin_number);    
        return 1;

   }
    else
   {
        return 0;
    //error handling
   }   
  
    break;

  case 'B':

    if (value == LOW)
    {
        PORTB &= ~( 1<< pin_number);
        return 1;

    }
    
   else if (value == HIGH)
   {
      PORTB |= (1<<pin_number);    
        return 1;

   }
   else
   {
        return 0;
    //error handling
   }   
    break;

  case 'C':

    if (value == LOW)
    {
        PORTC &= ~( 1<< pin_number);
        return 1;

    }
    
   else if (value == HIGH)
   {
      PORTC |= (1<<pin_number);    
        return 1;

   }    
   else
   {
        return 0;
    //error handling
   }   
   break;
   case 'D':

    if ( value == LOW)
    {
        PIND &= ~( 1<< pin_number);
        return 1;

    }
    
   else if (value == HIGH)
   {
      PIND |= (1<<pin_number);    
        return 1;

   }   
 else
   {
           return 0;
 //error handling
   }   
   default:
           return 0;

    break;
  }


}

 int DIO_toggle(uint8_t port_number, uint8_t pin_number)
{

   switch (port_number)
   {
   case 'A':
     PORTA ^= 1 << pin_number;
             return 1;


    break;

     case 'B':
     PORTB ^= 1 << pin_number;
             return 1;

      break;
    
     case 'C':
     PORTC ^= 1 << pin_number;
             return 1;

      break;


     case 'D':
     PORTD ^= 1 << pin_number;
             return 1;

    break;
   
   default:
           return 0;

    break;
   }


}

int DIO_read (uint8_t port_number, uint8_t pin_number , uint8_t *value)
{


switch (port_number)
{
case 'A':

  if (((PINA&(1<<pin_number))>>pin_number) == HIGH)
  {
    *value = HIGH;
    return 1;

  }
  else if (((PINA&(1<<pin_number))>>pin_number) == LOW)
  {
    *value = LOW;
    return 1;

  }

  break;

  case 'B':

  if (((PINB&(1<<pin_number))>>pin_number) == HIGH)
  {
    *value = HIGH;
            return 1;

  }
  else if (((PINB&(1<<pin_number))>>pin_number) == LOW)
  {
    *value = LOW;
            return 1;

  }
  else
  {
    //error handling
            return 0;
  }

  break;

  case 'C':

  if (((PINC&(1<<pin_number))>>pin_number) == HIGH)
  {
    *value = HIGH;
            return 1;

  }
  else if (((PINC&(1<<pin_number))>>pin_number) == LOW)
  {
    *value = LOW;
            return 1;

  }
   else
  {
            return 0;

    //error handling
  }


  break;

  case 'D':

  if (((PIND&(1<<pin_number))>>pin_number) == HIGH)
  {
    *value = HIGH;
        return 1;

  }
  else if (((PIND&(1<<pin_number))>>pin_number) == LOW)
  {
    *value = LOW;
            return 1;

  }
   else
  {
        return 0;
    //error handling
  }


  break;




default:
        return 0;

  break;
}




  
}