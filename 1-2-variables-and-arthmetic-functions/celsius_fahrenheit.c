#include <stdio.h>

/* 
 * print Celsius-Fahrenheit table
 * for fahr = 0, 20, ..., 300 
 */
main() {
    float fahr, cel;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("==============\n");
    while (fahr <= upper) {
        cel = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.1f\t%3.0f\n", cel, fahr);
        fahr = fahr + step;
    }
    printf("==============\n");
}

