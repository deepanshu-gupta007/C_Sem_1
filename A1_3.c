#include<stdio.h>
int fact(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Factorial of %d = %d\n", num, fact(num));
  return 0;
}
int fact(int n) {
  if (n>0){
    int i, fact=1;
    for (i=1; i<=n; i++)
      fact*=i;
    return fact;
  }else
    return 1;
}