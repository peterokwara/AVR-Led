
#define F_CPU 1000000L // Define the speed of the microcontroller

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
// OR operation, shift 1 zero positions to the
// left of the data direction register
// to get the same result as before
DDRB |= 1 << PINB0;

while (1) {
  /* code */

  PORTB |= 1 << PINB0; // Shift 1 zero to the left, or operation
  _delay_ms(800); // Delay of 800ms
  PORTB &= ~(1 << PINB0); // Assinging 0v to pin 0
  _delay_ms(800); // Delay of 800ms

  }
return 0;
}
