#include<stdio.h>
void magic_num(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  magic_num(num);
  return 0;
}
void magic_num(int n) {
  int copy_num, rem, i, sum=0, copy_sum, rev=0, res;
  copy_num=n;
  while (copy_num!=0)
    rem=copy_num%10, sum+=rem, copy_num/=10;
  copy_sum=sum;
  while (copy_sum!=0)
    rem=copy_sum%10, rev=rev*10+rem, copy_sum/=10;
  res=sum*rev;
  if (n==res)
    printf("Yes, %d is a magic number having result is %d\n", n, res);
  else
    printf("No, %d is not a magic number having result is %d\n", n, res);
}