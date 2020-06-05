#include <stdio.h>

main() 
{
    float fahr, celsius;
    float start, end, interval;

    start = -100;
    end = 100;
    interval = 20;

    celsius = start;

    while (celsius <= end) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.0f %3.0f\n", celsius, fahr);
        celsius = celsius + interval;
    }
}