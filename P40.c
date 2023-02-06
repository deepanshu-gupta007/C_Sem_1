#include<stdio.h>
int main() {
  int num, copy_num, rem, rb=0, b=0;
  printf("Enter decimal number: ");
  scanf("%d", &num);
  copy_num=num;
  while (copy_num>0)
    rem=copy_num%2, rb=rb*10+rem, copy_num/=2;
  while (rb>0)
    rem=rb%10, b=b*10+rem, rb/=10;
  printf("Binary Number = %d\n", b);
  return 0;
}