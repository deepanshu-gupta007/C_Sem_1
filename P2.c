#include<stdio.h>
int main() {
  float rad,area,cum;
  printf("Enter radius: ");
  scanf("%f", &rad);
  area=3.14*rad*rad, cum=2*3.14*rad;
  printf("Area = %f\nCircumference = %f\n", area, cum);
  return 0;
}