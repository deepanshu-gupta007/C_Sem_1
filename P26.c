#include<stdio.h>
int main() {
  int num, copy_num, rem, res=0;
  printf("Enter a number: ");
  scanf("%d", &num);
  copy_num = num;
  while (copy_num != 0){
    rem=copy_num%10, res=res*10+rem, copy_num/=10;
  } if (num==res) 
    printf("%d is a palindrome number\n", num);
  else
    printf("%d is not a palindrome number\n", num);
  return 0;
}