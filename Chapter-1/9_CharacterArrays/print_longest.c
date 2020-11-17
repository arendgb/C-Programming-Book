#include <stdio.h>
#define MAXLINE 1000 /* max input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main() {
    int len;        /* current line length */
    int max;        /* max length so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line should be safed here */

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was at least 1 line */
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */

/* void defines that no value is returned */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') /* \0 (null char) at the end of the array marks th eend of the string of characters */
        ++i;
}