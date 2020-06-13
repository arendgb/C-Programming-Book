#include <stdio.h>

int power(int m, int n); // Defines Power as function with two int parametrs

// Alternative method
/* 
int power(int, int)
*/

// Test the Power function
int main() 
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i)); // Call Power function
    return 0; // Explicitely return 0 -> indicates normal execution
}

// Power function; raise base to n-th power
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}