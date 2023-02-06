#include<stdio.h>
int main() {
  int num, i, sum=0;
  printf("Enter the end term positon: ");
  scanf("%d", &num);
  for (i=1; i<=num; i++)
    sum+=(i*i);
  printf("Sum = %d\n", sum);
  return 0;
}