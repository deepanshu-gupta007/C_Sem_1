#include<stdio.h>
void strong_num(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  strong_num(num);
  return 0;
}
void strong_num(int n) {
  int copy_num, rem, i, sum=0;
  copy_num=n;
  while (copy_num!=0) {
    rem=copy_num%10;
    int fact=1;
    for (i=1; i<=rem; i++)
      fact*=i;
    sum+=fact;
    copy_num/=10;
  }
  if (n==sum)
    printf("Yes, %d is a strong number having result is %d\n", n, sum);
  else
    printf("No, %d is not a strong number having result is %d\n", n, sum);
}