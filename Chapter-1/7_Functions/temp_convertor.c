#include <stdio.h>

float fahr_to_celsius(float fahr);

main() {
    float i;

    for(i = 0.0; i <= 200.0; i = i + 20.0) {
        printf("%.1f celsius\n", fahr_to_celsius(i));
    }
}

float fahr_to_celsius(float fahr) {
    return ((fahr - 32) * 5) / 9;
}