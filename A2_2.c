#include<stdio.h>
int fibonacci(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num, i;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Fibonacci Series:\t");
  for (i=0; i<num; i++)
    printf("%d\t", fibonacci(i));
  printf("\n");
  return 0;
}
int fibonacci(int n) {
  if (n==0)
    return 0;
  else if (n==1)
    return 1;
  else 
    return (fibonacci(n-1)+fibonacci(n-2));
}