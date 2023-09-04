#include <xc.h>
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xff; // Set PORTB is a OUTPUT
	while(1)	 // infinite loop
	{
		PORTB = 0x01; // Turn ON the PORTB.0 LED
		_delay_ms(1000); // Delay 1s
		PORTB = 0x00; // Turn OFF the PORTB.0 LED
		_delay_ms(1000); // Delay 1s
	}
}