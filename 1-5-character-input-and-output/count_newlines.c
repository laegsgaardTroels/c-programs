#include <stdio.h>

main() {
    int tb, c;
    tb = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++tb;
    printf("%d\n", tb);
}
