#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */


int main() {
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state != OUT) {
                putchar('\n');
                state = OUT;
            };
        } else if (state == OUT) {
            putchar(c);
            state = IN;
        };
    }
}
