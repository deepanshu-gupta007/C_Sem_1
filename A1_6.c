#include<stdio.h>
void binary(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter decimal number: ");
  scanf("%d", &num);
  binary(num);
  return 0;
}
void binary(n) {
  int rem, rb=0, b=0; 
  while (n>0)
    rem=n%2, rb=rb*10+rem, n/=2;
  while (rb>0)
    rem=rb%10, b=b*10+rem, rb/=10;
  printf("Binary Number = %d\n", b);
}