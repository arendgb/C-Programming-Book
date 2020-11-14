#include <stdio.h>

main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%3s %6s\n", "Fahr", "Celsius");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius); /* %3.0f defines that a floating point is to be printed with 3 char wide, no decimal/frac. %6.1 implies 6 char wide, with 1 decimal */
        fahr = fahr + step;
    }
}