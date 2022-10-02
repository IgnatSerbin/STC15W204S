#include <STC15Fxx.h>
#include <board.h>
#include <delay.h>

void main(){
    while (1)
    {
        LED_BUILDIN = LED_BUILDIN_ON;
        delay_ms(1000);
        LED_BUILDIN = LED_BUILDIN_OFF;
        delay_ms(1000);
    }
    
}