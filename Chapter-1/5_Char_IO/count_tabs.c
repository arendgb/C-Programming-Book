#include <stdio.h>

main() {
    int c, tabs;
    tabs = 0;

    while( (c=getchar()) != EOF ) {
        if(c == '\t')
            ++tabs;
    }
    printf("%d\n",tabs);
}