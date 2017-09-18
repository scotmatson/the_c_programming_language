/*
 * Testing method to reverse integers
 * to use as solution for string reversal.
 */

#include <stdio.h>

int main()
{
  int i, j;
 
  printf("Even Test\n");
  for (i = 0, j = 10; i < j/2; ++i) {
    printf("(i, j) : (%d, %d)\n", i, j-i);
  }

  printf('\n');

  printf("Odd Test\n");
  for (i = 0, j = 11; i < j/2; ++i) {
    printf("(i, j) : (%d, %d)\n", i, j-i);
  }

  return 0;
}
