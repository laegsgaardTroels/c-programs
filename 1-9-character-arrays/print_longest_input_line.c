#include <stdio.h>
#define MAXLINE 1000  /* the maximum input line length */

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

/* exercise 1-16 */
/* print longest input line length */
int main() {
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];      /* current input line */
    char longest[MAXLINE];   /* longest line saved here */

    max = 0;
    while ((len = getline_(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        };
    if (max > 0)  /* there was a line */
        printf("%d %s\n", max, longest);
    return 0;
}


/* getline_: read a line into s, return length */
int getline_(char s[],  int lim) {
    int c, i;
    i = 0;
    while ((c=getchar()) != EOF && c != '\n') {
        if (i < lim - 1) {
            s[i] = c;
        };
        ++i;
    };
    if (i < lim - 1) {
        if (c == '\n') {
            s[i] = '\n';
            ++i;
        }
        s[i] = '\0';
    } else {
        s[lim - 4] = '.';
        s[lim - 3] = '.';
        s[lim - 2] = '.';
        s[lim - 1] = '\0';
    };
    return i;
}

/* copy from into to, assume to is big enough */
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}



