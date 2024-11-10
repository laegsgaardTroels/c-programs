#include <stdio.h>
#define MAXLINE 1000  /* the maximum input line length */


int getline_(char line[], int maxline);
void clean_line(char line[], int len);


/* exercise 1-18 */
int main() {
    int c;                   /* current character */
    int len;                 /* current line length */
    char line[MAXLINE];      /* current input line */
    while ((len = getline_(line, MAXLINE)) > 0) {
        clean_line(line, len);
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
    
    if (i >= lim - 1) {
        s[lim - 1] = '\0';
    } else {
        if (c == '\n') {
            s[i] = '\n';
            ++i;
        }
        s[i] = '\0';
    }

    return i;
}

void clean_line(char line[], int len) {
    int i;
    if (len >= (MAXLINE - 1)) {
        len = MAXLINE - 1;
    }
    for (i=len; i>=0; --i) {
        if (line[i] == ' ' || line[i] == '\t')
            line[i] = '\0';
    }
}



