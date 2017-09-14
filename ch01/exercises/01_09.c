#include <stdio.h>

/* Replace multiple blanks with single blanks. */
int main()
{
  int c, b;

  b = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++b;
    else
      b = 0;

    if (b < 2)
      putchar(c);
  }
}
