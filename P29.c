#include<stdio.h>
int main() {
  int x=0, y=1, z, num, i;
  printf("Enter the term to end fibonacci series: ");
  scanf("%d", &num);
  printf("%d\t%d\t", x, y);
  for (i=3; i<=num; i++) {
    z=x+y;
    printf("%d\t", z);
    x=y, y=z;
  }
  printf("\n");
  return 0;
}