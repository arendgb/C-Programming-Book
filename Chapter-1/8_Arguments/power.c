#include <stdio.h>

int power(int b, int m);

/* the power function using call by value */

main() {
    int num,i;
    i = 2;

    for (num = 1; num < 10; ++num) 
        printf("%d x %d = %d\n", num, num, power(num,i));
}

/* n is used as a temporary variable, counted down until it becomes zero, no longer need for i var, */
int power(int base, int n) {
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}