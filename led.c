#include <avr/io.h>

int main(void) {
  /* code */
DDRB = 0b00000001;

while (1) {
  /* code */
  PORTB = 0b00000001;
  }
return 0;
}
