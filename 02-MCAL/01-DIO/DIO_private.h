/*****************************************************************************/
/* Description : DIO private file                                            */
/* Author      : Mona Safwat                                                 */
/* Version     : 0.1v                                                        */
/* Date        :  6 July 2023                                                */
/* History     : 0.1v initial creation                                       */
/*****************************************************************************/

#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

#define  INPUT              0
#define  OUTPUT             1

#define  conc(a,b,c,d,e,f,g)                         conc_help(a,b,c,d,e,f,g) 
#define  conc_help(a,b,c,d,e,f,g)                      a##b##c##d##e##f##g

#define  DDRA         *((volatile u8 *)(3A))
#define  DDRB         *((volatile u8 *)(37))
#define  DDRC         *((volatile u8 *)(34))
#define  DDRD         *((volatile u8 *)(31))

#define  PORTA        *((volatile u8 *)(3B))
#define  PORTB        *((volatile u8 *)(38))
#define  PORTC        *((volatile u8 *)(35))
#define  PORTD        *((volatile u8 *)(32))

#define  PINA         *((volatile u8 *)(39))
#define  PINB         *((volatile u8 *)(36))
#define  PINC         *((volatile u8 *)(33))
#define  PIND         *((volatile u8 *)(30))

#endif