#include<stdio.h>
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num<10)
    printf("%d is single digit number\n", num);
  else if (num>10 && num<100)
    printf("%d is double digit number\n", num);
  else
    printf("Invalid\n");
  return 0;
}