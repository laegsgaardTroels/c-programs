#include <stdio.h>

main() {
    int tb, c;
    tb = 0;
    while ((c = getchar()) != '\n')
        if (c == ' ')
            ++tb;
    printf("%d\n", tb);
}
