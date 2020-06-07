#include <stdio.h>

/* Counts characters in input; 1st version */
// main() {
//     long nc; /* Value at least 32 bits, to not overflow the variable (int) */

//     nc = 0;

//     while(getchar() != EOF)
//         ++nc; /* Increment with one - same as nc++*/
//     printf("%ld\n", nc);
// }

/* Counts characters in input; 2nd version */
main() {
    double nc;

    for(nc=0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);

}