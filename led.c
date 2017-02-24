
#define F_CPU 1000000L // Define the speed of the microcontroller

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
// OR operation, assign Port B to output in the
// data direction register
DDRB |= 0b00000001;

while (1) {
  /* code */

  PORTB = 0b00000001; // Assigning 5v to pin 0
  _delay_ms(800); // Delay of 800ms
  PORTB = 0b00000000; // Assinging 0v to pin 0
  _delay_ms(800); // Delay of 800ms

  }
return 0;
}
