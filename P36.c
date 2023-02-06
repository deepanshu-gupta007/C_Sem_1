#include<stdio.h>
int main() {
  int num, i, j, sum=0;
  printf("Enter the end term positon: ");
  scanf("%d", &num);
  for (i=1; i<=num; i++){
    int fact=1;
    for (j=i; j>0; j--)
      fact*=j;
    sum+=fact;
  }
  printf("Sum = %d\n", sum);
  return 0;
}