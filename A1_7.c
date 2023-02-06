#include<stdio.h>
void fibonacci(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  fibonacci(num);
  return 0;
}
void fibonacci(int n) {
  int x=0, y=1, z, i;
  printf("%d\t%d\t", x, y);
  for (i=3; i<=n; i++) {
    z=x+y;
    printf("%d\t", z);
    x=y, y=z;
  }
  printf("\n");
}