#include <stdio.h>

/* count characters in input; 1st version */ 
main() {
    long nc; /* long variables are at least 32 bits, and is more resilient against overflow */

    nc = 0;
    while (getchar() != EOF)
        ++nc; /* increment by one */
    printf("%ld\n", nc); /* instruct that the argument is a long integer */
}