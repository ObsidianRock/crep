#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void)
{
  float fahrenheit, celsius;

  printf("Enter Fahrenheit Temperature: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

  printf("%.1f fahrenheit is same as %.1f in celsius", fahrenheit, celsius);
  return 0;

}
