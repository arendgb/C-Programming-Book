#include <stdio.h>

/* Improved version of fahr_to_celsius.c with proper formatting */

main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300; 
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celsius); /* Right justified numbers using a width, the number will be right jusitified within the field */
        fahr = fahr + step;
    }
}