#include<stdio.h>
int pow(int a, int b);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int a, b;
  printf("Enter a number and power:\n");
  scanf("%d %d", &a, &b);
  printf("The value of %d raised to power %d = %d\n", a, b, pow(a,b));
  return 0;
}
int pow(a, b) {
  int i, ans=1;
  if (b!=0){
    for (i=1; i<=b; i++)
      ans*=a;
    return ans;
  }
  else return 1;
}