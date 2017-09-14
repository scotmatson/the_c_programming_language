#include <stdio.h>

/* Prints a histogram representation of word length. */
int main()
{
  int c, i, j, nc;
  int h[20];

  for (i = 0; i < 20; ++i) 
    h[i] = 0;

  nc = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      h[nc] = h[nc] + 1;
      nc = 0;
    }
    else {
      ++nc;
    }
  }

  printf("Word Length Histogram\n");
  for (i = 0; i < 20; ++i) {
    printf("%-5d", i);
    for (j = 0; j < h[i]; ++j) {
      printf("#");
    }
    printf("\n");
  }
}
