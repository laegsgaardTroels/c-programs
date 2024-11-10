#include <stdio.h>

#define N_CHARACTERS 26


int main() {
    int c, i, j;
    int nchar[N_CHARACTERS]; /* a-z */
    for (i=0; i<N_CHARACTERS; ++i)
        nchar[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'z')
            ++nchar[c - 'a'];

    for (i=0; i< N_CHARACTERS; ++i) {
        putchar('a' + i);
        printf(" : ");
        for (j=0; j< nchar[i]; ++j)
            printf("=");
        printf("\n");
    }
}
