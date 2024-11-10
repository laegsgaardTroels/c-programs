#include <stdio.h>

#define MAX_WORD_LENGTH 20
#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

int main() {
    int c, i, j, state, hist[MAX_WORD_LENGTH], nchar;
    for (i=0; i< MAX_WORD_LENGTH; ++i)
        hist[i] = 0;
    state = OUT;

    nchar = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++hist[nchar];
            nchar = 0;
            state = OUT;
        } else {
            ++nchar;
            state = IN;
        };
    };

    for (i=0; i< MAX_WORD_LENGTH; ++i) {
        printf("%2d: ", i);
        for (j=0; j< hist[i]; ++j)
            printf("=");
        printf("\n");
    }
}
