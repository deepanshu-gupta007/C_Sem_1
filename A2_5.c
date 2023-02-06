#include<stdio.h>
#include<math.h>
int rev(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Reverse Number = %d\n", rev(num));
  return 0;
}
int rev(int n) {
  if (n!=0){
    int x=log10(n);
    return (n%10)*pow(10,x)+rev(n/10);
  }
  else
    return n%10+n;
}