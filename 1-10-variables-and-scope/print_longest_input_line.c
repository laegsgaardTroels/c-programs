#include <stdio.h>
#define MAXLINE 1000  /* the maximum input line length */

int max;                /* maximum length seen so far */
char line[MAXLINE];      /* current input line */
char longest[MAXLINE];   /* longest line saved here */

int getline_(void);
void copy(void);

/* print longest input line length, specialized version */
int main() {
    int len;                /* current line length */
    extern int max;
    extern char longest[MAXLINE];

    max = 0;
    while ((len = getline_()) > 0)
        if (len > max) {
            max = len;
            copy();
        };
    if (max > 0)  /* there was a line */
        printf("%d %s\n", max, longest);
    return 0;
}


/* getline_: read a line into s, return length, specialized version */
int getline_(void) {
    int c, i;
    extern char line[];
    for (i=0; i<MAXLINE-1 && (c=getchar() != EOF && c != '\n'); ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    return i;
}

/* copy from into to, assume to is big enough */
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}



