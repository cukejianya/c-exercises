#include <stdio.h>

int main(void) {
  int hgt, len, wid, vol, wgt;

  printf("Enter height of box: ");
  scanf("%d", &hgt);
  printf("Enter length of box: ");
  scanf("%d", &len);
  printf("Enter width of box: ");
  scanf("%d", &wid);
  vol = hgt * len * wid;
  wgt = (vol + 165) / 166;

  printf("Volume (cubic inches): %d\n", vol);
  printf("Dimensional weight (pounds): %d\n", wgt);

  return 0;
}
