#include <stdio.h>

main() {
    int c,bl;

    bl = 0;

    while((c=getchar()) != EOF) {
        if (c == ' ')
            ++bl;
    }
    printf("%d\n", bl);
}