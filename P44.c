#include<stdio.h>
int main() {
  int n, i, j, num;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for (i=n; i>0; i--) {
    num=i;
    for (j=i; j>0; j--)
      printf("%d\t", num--);  
    printf("\n");
  }
  return 0;
}