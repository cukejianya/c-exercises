#include <stdio.h>

int main(void) {
  int height, length, width, volume, weight;
  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 163) /166;

  printf("Dimensions: %dx%dx%dx\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional  weight (pounds): %d\n", weight);

  return 0;
}
  
