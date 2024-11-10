#include <stdio.h>


int main() {
    int c_prev, c;
    c_prev = ' ';
    while ((c = getchar()) != EOF) {
        if ((c_prev != ' ') || (c != ' ')) {
            putchar(c);
        };
        c_prev = c;
    };
}
