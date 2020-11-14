#include <stdio.h>

main() {

    float celsius, fahr;
    float lower, upper, step;

    lower = -20;
    upper = 180;
    step = 20;

    celsius = lower;
    printf("%3s %6s\n", "Celsius", "Fahr");

    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }


}