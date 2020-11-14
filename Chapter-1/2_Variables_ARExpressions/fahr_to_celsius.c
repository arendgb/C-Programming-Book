#include <stdio.h>

/* print Fahrenheit-Celsius table for 0 > fahr < 300; 
    using formula: C = (5/9) * (F-32) where C is the amount of celsius, and F is the amount of Fahren */

main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temp scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;

    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9; /* We only use the division by 9 at the end, as C discards any fractional part, which would result in C=0*/
        printf("%d\t%d\n", fahr, celsius); /* %d specifies an integer argument, where \t specifies a tab between the values */
        fahr = fahr + step;
    }
}