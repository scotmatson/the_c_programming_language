#include <stdio.h>

int main()
{
  int c, i;
  int h[128];

  for (i = 0; i < 128; ++i)
    h[i] = 0;

  while ((c = getchar()) != EOF) {
    h[c] = h[c] + 1;
  }

  for (i = 0; i < 128; ++i) {
    printf("%c: %.2f%%\n", i, h[i] / 128.0);
  }
}
