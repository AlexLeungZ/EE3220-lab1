#include "mbed.h"

#define BLINKING_RATE 1000ms

// main() runs in its own thread in the OS
int main()
{
    DigitalOut led(LED1);

    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);        
    }
}

