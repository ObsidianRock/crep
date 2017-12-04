#include <stdio.h>

int main(void)
{

  int height, length, weight, volume, width;

  height = 8;
  length = 12;
  width = 10;

  volume = height * length * volume;
  weight = (volume + 165) / 166;

  printf("Dimentions l x w x h: %d x %d x %d\n", length, width, height);
  printf("Volume: %d\n", volume);
  printf("weight (lb): %d\n", weight);

  return 0;
}
