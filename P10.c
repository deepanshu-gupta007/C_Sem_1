#include<stdio.h>
int main() {
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  if (num<0)
    printf("%d is negative number", num);
  else if (num>0)
    printf("%d is positive number", num);
  else
    printf("%d is zero", num);
  return 0;
}