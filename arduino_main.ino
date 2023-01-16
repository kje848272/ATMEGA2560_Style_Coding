#define F_CPU 16000000UL  // clock 설정
#include <avr/io.h>  // AVR programming
#include <util/delay.h>
// #include <Arduino.h> : 위 코드들을 포함

int main(const int argc, const char* argv[])
{
  DDRB = 0xA0;  // 0b1010_0000 == PIN13, PIN11 OUTPUT
  PORTB = 0b00100000;

  for(;;){
    //PORTB |= 0x80;
    //PORTB &= ~0x20;
    _delay_ms(1000UL);
    PORTB ^= 0xA0;
    //PORTB &= ~0x80;
    //PORTB |= 0x20;
    _delay_ms(1000UL);
  }

  return 0;
}
