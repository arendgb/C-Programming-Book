#include <stdio.h>

/* count characters in input; 2nd version */

main() {
    double nc;

    for (nc=0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc); /* printf uses %f for both float and double, %.0f suppreses the dec and fraction  */

}