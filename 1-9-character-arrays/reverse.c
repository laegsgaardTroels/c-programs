#include <stdio.h>
#define MAXLINE 1000


int getline_(char line[], int maxline);
void reverse(char s[], int len);

/* exercise 1-19 */
int main() {
    int len;                /* current line length */
    char line[MAXLINE];      /* current input line */
    while ((len = getline_(line, MAXLINE)) > 0) {
        reverse(line, len);
        printf("%s", line);
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
        s[lim - 5] = '.';
        s[lim - 4] = '.';
        s[lim - 3] = '.';
        s[lim - 2] = '\n';
        s[lim - 1] = '\0';
    };
    return i;
}


void reverse(char s[], int len) {
    char revs[len];
    int i;
    for (i=0; i<len; ++i)
        revs[i] = s[len - i - 1];
    for (i=0; i<len; ++i)
        s[i] = revs[i];
}

