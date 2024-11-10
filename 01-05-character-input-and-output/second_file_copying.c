#include <stdio.h>

/* copy input to output; 2nd version */
main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        printf("\n");
        if (getchar() != EOF) {
            printf("Not EOF\n");
            printf("%d\n", EOF);
        } else {
            printf("EOF\n");
        }
    }
}
