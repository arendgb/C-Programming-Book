#include <stdio.h>

/* Copy input to output; 1st version */
// main() 
// {
//     int c; /* Int is used here as we can't use char due to the fact that EOF is too big for char*/

//     c = getchar();

//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }
// }

/* copy input to output; 2nd version; centralizes the input; shrinks program */
main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}
