/*
 * dio.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Muhammad.Elzeiny
 */

#include "../../utils/Bit_Math.h"
#include "../../utils/STD_Types.h"
/*TODO: include the header file that contains register definitions //DONE// */
#include "../../mcal/mcu_hw.h"

#include "dio.h"
STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    STD_levelType ret;
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;


    /*TODO: Return the Input Channel Value //DONE// */
    switch (PortId)
           {
           case Dio_Port_A:
               ret=GET_BIT(PORTA_REG.GPIODATA,ChannelPos);
               break;
           case Dio_Port_B:
               ret=GET_BIT(PORTB_REG.GPIODATA,ChannelPos);
               break;
           case Dio_Port_C:
               ret=GET_BIT(PORTC_REG.GPIODATA,ChannelPos);
               break;
           case Dio_Port_D:
               ret=GET_BIT(PORTD_REG.GPIODATA,ChannelPos);
               break;
           case Dio_Port_E:
               ret=GET_BIT(PORTE_REG.GPIODATA,ChannelPos);
               break;
           case Dio_Port_F:
               ret=GET_BIT(PORTF_REG.GPIODATA,ChannelPos);
               break;
           }

    return ret;

}
void Dio_WriteChannel(Dio_ChannelType ChannelId, STD_levelType Level)
{
    /*TODO: Write the input value in the corresponding ChannelId //DONE//*/
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;
    if(Level==1)
    {
    switch (PortId)
              {
              case Dio_Port_A:
                  SET_BIT(PORTA_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_B:
                  SET_BIT(PORTB_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_C:
                  SET_BIT(PORTC_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_D:
                  SET_BIT(PORTD_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_E:
                  SET_BIT(PORTE_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_F:
                  SET_BIT(PORTF_REG.GPIODATA,ChannelPos);
                  break;
              }
        }
    else if(Level==0)

    {
        switch (PortId)
          {
          case Dio_Port_A:
              CLR_BIT(PORTA_REG.GPIODATA,ChannelPos);
              break;
          case Dio_Port_B:
              CLR_BIT(PORTB_REG.GPIODATA,ChannelPos);
              break;
          case Dio_Port_C:
              CLR_BIT(PORTC_REG.GPIODATA,ChannelPos);
              break;
          case Dio_Port_D:
              CLR_BIT(PORTD_REG.GPIODATA,ChannelPos);
              break;
          case Dio_Port_E:
              CLR_BIT(PORTE_REG.GPIODATA,ChannelPos);
              break;
          case Dio_Port_F:
              CLR_BIT(PORTF_REG.GPIODATA,ChannelPos);
              break;
          }


    }


}
uint8 Dio_ReadPort(Dio_PortType PortId )
{
    uint8 ret;

    /*TODO: Return the Port Value //DONE//*/
    switch (PortId)
               {
               case Dio_Port_A:
                   ret=GET_REG(PORTA_REG.GPIODATA,uint8,0);
                   break;
               case Dio_Port_B:
                   ret=GET_REG(PORTB_REG.GPIODATA,uint8,0);
                   break;
               case Dio_Port_C:
                   ret=GET_REG(PORTC_REG.GPIODATA,uint8,0);
                   break;
               case Dio_Port_D:
                   ret=GET_REG(PORTD_REG.GPIODATA,uint8,0);
                   break;
               case Dio_Port_E:
                   ret=GET_REG(PORTE_REG.GPIODATA,uint8,0);
                   break;
               case Dio_Port_F:
                   ret=GET_REG(PORTF_REG.GPIODATA,uint8,0);
                   break;
               }


    return ret;
}
void Dio_WritePort( Dio_PortType PortId, uint8 value)
{
    /*TODO: Write the input value in the corresponding PortId //DONE// */
    switch (PortId)
          {
          case Dio_Port_A:
              PORTA_REG.GPIODATA = value;
              break;
          case Dio_Port_B:
              PORTB_REG.GPIODATA = value;
              break;
          case Dio_Port_C:
              PORTC_REG.GPIODATA = value;
              break;
          case Dio_Port_D:
              PORTD_REG.GPIODATA = value;
              break;
          case Dio_Port_E:
              PORTE_REG.GPIODATA = value;
              break;
          case Dio_Port_F:
              PORTF_REG.GPIODATA = value;
              break;
          }

}
void Dio_FlipChannel( Dio_ChannelType ChannelId)
{
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;
    /* TODO: toggle the corresponding ChannelId //DONE// */
    switch (PortId)
              {
              case Dio_Port_A:
                  TOGGLE_BIT(PORTA_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_B:
                  TOGGLE_BIT(PORTB_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_C:
                  TOGGLE_BIT(PORTC_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_D:
                  TOGGLE_BIT(PORTD_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_E:
                  TOGGLE_BIT(PORTE_REG.GPIODATA,ChannelPos);
                  break;
              case Dio_Port_F:
                  TOGGLE_BIT(PORTF_REG.GPIODATA,ChannelPos);
                  break;
              }


}
void Dio_FlipPort(Dio_PortType PortId)
{

    /*TODO: toggle the port value //DONE//*/
    switch (PortId)
            {
            case Dio_Port_A:
                PORTA_REG.GPIODATA =~ GET_REG(PORTA_REG.GPIODATA,uint8,0);
                break;
            case Dio_Port_B:
                PORTB_REG.GPIODATA =~ GET_REG(PORTB_REG.GPIODATA,uint8,0);
                break;
            case Dio_Port_C:
                PORTC_REG.GPIODATA =~ GET_REG(PORTC_REG.GPIODATA,uint8,0);
                break;
            case Dio_Port_D:
                PORTD_REG.GPIODATA =~ GET_REG(PORTD_REG.GPIODATA,uint8,0);
                break;
            case Dio_Port_E:
                PORTE_REG.GPIODATA =~ GET_REG(PORTE_REG.GPIODATA,uint8,0);
                break;
            case Dio_Port_F:
                PORTF_REG.GPIODATA =~ GET_REG(PORTF_REG.GPIODATA,uint8,0);
                break;
            }


}



