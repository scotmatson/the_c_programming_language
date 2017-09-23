/*
 * Write a program to determine the ranges of char, short, int
 * and long variables, both signed and unsigned, by printing
 * appropriate values from standard headers and by direct
 * computation.
 * 
 * TODO
 * Harder if you compute them: determine the ranges
 * of the various floating-point types.
 **/

#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{

  printf("The value ranges from standard headers:\n");
  printf("Range of char: [%d, %d]\n", CHAR_MIN, CHAR_MAX);
  printf("Range of signed char: [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
  printf("Range of unsigned char: [0, %d]\n", UCHAR_MAX);
  printf("\n");
  printf("Range of short: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
  printf("Range of signed short: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
  printf("Range of unsigned short: [0, %d]\n", USHRT_MAX);
  printf("\n");
  printf("Range of int: [%d, %d]\n", INT_MIN, INT_MAX);
  printf("Range of unsigned int: [0, %u]\n", UINT_MAX);
  printf("\n");
  printf("Range of long: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
  printf("Range of unsigned long: [0, %lu]\n", ULONG_MAX);

  return 0;
}
