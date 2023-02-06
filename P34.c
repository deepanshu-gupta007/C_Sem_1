#include<stdio.h>
int main() {
  float num, i, sum=0;
  printf("Enter the end term positon: ");
  scanf("%f", &num);
  for (i=1; i<=num; i++)
    sum+=(1/i);
  printf("Sum = %f\n", sum);
  return 0;
}