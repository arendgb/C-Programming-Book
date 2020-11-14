#include <stdio.h>


/* copy input to output; 1st version */
main() {
    int c; /* Any integer type can be used, we use int as char does not have a big enough storage capabilities to store EOF in addition to other chars */

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}