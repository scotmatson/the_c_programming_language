#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 160;
  step = 20;

  printf("Temperature Conversion Chart\nCelsius to Fahrenheit\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
