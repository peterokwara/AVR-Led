#include <avr/io.h>

int main(void) {
  /* code */

// Data direction register and assigning pin 0
// on Port B to output
DDRB = 0b00000001;

while (1) {
  /* code */

  // Assigning 5v to pin 0
  PORTB = 0b00000001;
  }
return 0;
}
