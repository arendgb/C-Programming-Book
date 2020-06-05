#include <stdio.h>

/* Print the Fahrenheit-Celsius table */

main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* Step size */

    fahr = lower;

    printf("  F'   C' \n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
