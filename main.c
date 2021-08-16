#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include <avr/delay.h>
#include <stdio.h>

//#define F_CPU 8000000   //define CPU 8Mega frequency Hertz

u8 DIO_u8_GetPinValue(u8 Copy_u8_PinNo);
void traffic_stop_lightening(void);
void traffic_go_lightening(void);

int main(void)
{
	DIO_void_Init();
	
	while(1)
	{
		DIO_void_SetPinValue(DIO_u8Pin0, DIO_u8HIGH);
		traffic_stop_lightening();
		DIO_void_SetPinValue(DIO_u8Pin0, DIO_u8LOW);
		DIO_void_SetPinValue(DIO_u8Pin1, DIO_u8HIGH);
		traffic_stop_lightening();
		DIO_void_SetPinValue(DIO_u8Pin1, DIO_u8LOW);
		DIO_void_SetPinValue(DIO_u8Pin2, DIO_u8HIGH);
		traffic_go_lightening();
		DIO_void_SetPinValue(DIO_u8Pin2, DIO_u8LOW);
	}
	
	/*
	u8 Local_u8Res = DIO_u8_GetPinValue(DIO_u8Pin0);
	printf("PIN IS %d",Local_u8Res);
	 */
	return 0;
}


