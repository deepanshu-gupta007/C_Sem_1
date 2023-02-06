#include<stdio.h>
int main() {
  int a,b,sum,diff,mul,div,rem;
  printf("Enter numbers:\n");
  scanf("%d %d",&a, &b);
  sum=a+b, diff=a-b, mul=a*b, div=a/b, rem=a%b;
  printf("Sum = %d\nDiference = %d\nMultiplication = %d\nDivision = %d\nReminder = %d\n", sum, diff, mul, div, rem);
  return 0;
}