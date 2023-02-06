#include<stdio.h>
int main() {
  float l,b,area,per;
  printf("Enter length and breadth:\n");
  scanf("%f %f",&l, &b);
  area=l*b, per=2*(l+b);
  printf("Perimeter = %f\nArea = %f\n", per, area);
  return 0;
}