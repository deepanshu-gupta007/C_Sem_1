#include<stdio.h>
int sum_num(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Sum = %d\n", sum_num(num));
  return 0;
}
int sum_num(int n) {
  if (n!=0)
    return n%10+sum_num(n/10);
  else
    return n%10+n;
}