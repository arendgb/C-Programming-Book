#include <stdio.h>

/* Print the Fahrenheit-Celsius table */

main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* Step size */

    fahr = lower;

    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;

        /* Underlying print solution is not a very pretty option as the numbers are not right-justified */
        /* printf("%d\t%d\n", fahr, celsius); */

        printf("%3d %6d\n", fahr, celsius);

        fahr = fahr + step;
    }
}