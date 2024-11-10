#include <stdio.h>


int power(int, int);


int main() {
    int i, j;
    for (i=0; i<10; ++i)
        for (j=0; j<10; ++j)
            printf("%d %d %d\n", i, j, power(i, j));
}


int power(int base, int n) {
    int p;
    for (p=1; n > 0; --n)
        p = p * base;
    return p;
}
