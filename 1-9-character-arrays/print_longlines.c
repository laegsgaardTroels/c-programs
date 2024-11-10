#include <stdio.h>
#define MAXLINE 1000  /* the maximum input line length */


int getline_(char s[], int lim);


/* exercise 1-17 */
int main() {
    int len;                 /* current line length */
    char line[MAXLINE];      /* current input line */
    while ((len = getline_(line, MAXLINE)) > 0) {
        if (len >= 80) {
            printf("%s", line);
        }
    }
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

