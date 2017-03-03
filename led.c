
#define F_CPU 1000000L // Define the speed of the microcontroller

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
DDRB |= 1 << PINB0;

while (1) {
  /* code */

  // Using ex-or operation to switch the last bit
  // to zero and back to one
  PORTB ^= 1 << PINB0;
  _delay_ms(800); // Delay of 800ms
  }
return 0;
}
