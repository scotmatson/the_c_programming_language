/*
 * Revise the main routine of the longest-line program so it will
 * correctly print the length of arbitrary long input linse, and
 * as much as possible of the text.
 */

#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  
  max = 0;
  while ((len = _getline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0)
    printf("%d: %s\n", max, longest);

  return 0;
}

/* getline: read a line into s, return length */
int _getline(char s[], int lim)
{
  int c, i, j;

  i = j = 0;
  while (i < lim-1 && (c = getchar()) != EOF && c != '\n') {
    s[i] = c;
    ++i;
  }

  if (c == '\n') {
    ++i;
  } else {
    while ((c = getchar()) != EOF && c != '\n')
      ++j;
  }

  s[i] = '\0';

  return (i+j);
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  for (i = 0; (to[i] = from[i]) != '\0'; ++i)
    ;
}
