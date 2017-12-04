#include <stdio.h>

#define INCH_PER_POUND 166



int main(void)
{

  int height, length, weight, volume, width;


  printf("Enter height of box: ");
  scanf("%d", &height);

  printf("Enter lenght of box: ");
  scanf("%d", &length);

  printf("Enter width of box: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + INCH_PER_POUND - 1 ) / INCH_PER_POUND;

  printf("Dimentions l x w x h: %d x %d x %d\n", length, width, height);
  printf("Volume: %d\n", volume);
  printf("weight (lb): %d\n", weight);

  return 0;
}
