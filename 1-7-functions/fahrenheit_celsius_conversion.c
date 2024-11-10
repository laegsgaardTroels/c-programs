#include <stdio.h>


float fahr_to_cel(float);


/* exercise 1-15 */
int main() {
    float cel, fahr;
    for (fahr=0; fahr <= 300; fahr = fahr + 20) {
        cel = fahr_to_cel(fahr);
        printf("%6.1f\t%3.0f\n", cel, fahr);
    };
}


float fahr_to_cel(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
};
