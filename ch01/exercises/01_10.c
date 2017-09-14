#include <stdio.h>

/* Replace tabs with \t, backspace with \b, and backslash with \\. */
int main()
{
  int c;

  while((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    }
    else if (c == '\b') {
      putchar('\\');
      putchar('b');
    }
    else {
      putchar(c);
    }
  }
}
