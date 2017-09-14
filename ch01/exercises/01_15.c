#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float convert_to_fahrenheit(int fahr);

int main()
{
  int fahr;

  fahr = LOWER;
  printf("Fahrenheit to Celsius Temperature Conversion Chart\n");
  printf("Fahr Cels\n");
  while (fahr <= UPPER) {
    printf("%3d  %3.1f\n", fahr, convert_to_fahrenheit(fahr));
    fahr += STEP;
  }
  return 0;
}

float convert_to_fahrenheit(int fahr)
{
  return fahr * (5.0 / 9.0) - 32;
}
