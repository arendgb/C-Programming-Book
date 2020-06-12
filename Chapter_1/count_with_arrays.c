#include <stdio.h>

// Count digits, white spaces, others
main() 
{
    int c, i, nwhite, nother;
    int ndigit[10]; // Array of 10 integers

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9') // Determines if the character in c is a digit
            ++ndigit[c-'0']; //  The numerical value of that digit
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", 
        nwhite, nother);
}