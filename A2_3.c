#include<stdio.h>
int sum(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter the number of terms: ");
  scanf("%d", &num);
  printf("Sum = %d", sum(num));
  return 0;
}
int sum(int n) {
  if (n!=0) 
    return (n+sum(n-1));
}