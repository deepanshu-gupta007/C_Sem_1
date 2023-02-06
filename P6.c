#include<stdio.h>
int main() {
  float gs,bs,da,ta,hra;
  printf("Enter Basic Salary: ");
  scanf("%f",&bs);
  da=0.3*bs, ta=0.1*bs, hra=0.2*bs;
  gs=bs+da+ta+hra;
  printf("Gross Salary = %f\n", gs);
  return 0;
}