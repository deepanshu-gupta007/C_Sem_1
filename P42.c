#include<stdio.h>
int main() {
  int n, i, j, num=1;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for (i=n; i>0; i--) {
    for (j=i; j>0; j--)
      printf("%d\t", num);  
    printf("\n");
    num++;
  }
  return 0;
}