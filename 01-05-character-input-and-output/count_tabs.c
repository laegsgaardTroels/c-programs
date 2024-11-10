#include <stdio.h>

main() {
    int tc, c;
    tc = 0;
    while ((c = getchar()) != '\n')
        if (c == '\t')
            ++tc;
    printf("%d\n", tc);
}
