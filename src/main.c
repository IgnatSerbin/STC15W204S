#include <STC15Fxx.h>
#include <board.h>
#include <delay.h>

#define DELAY_MS 100

void main(){
    while (1)
    {
        LED_BUILDIN = LED_BUILDIN_ON;
        delay_ms(DELAY_MS);
        LED_BUILDIN = LED_BUILDIN_OFF;
        delay_ms(DELAY_MS);
    }
}