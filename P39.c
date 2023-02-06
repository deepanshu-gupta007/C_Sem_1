#include<stdio.h>
int main() {
  int n, i, j, k;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for (i=1; i<=n; i++){
    for (k=0; k<(n-i); k++)
      printf("\t");
    for (j=1; j<2*i; j++)
      printf("*\t");
    printf("\n");
  }
  for (i=n-1; i>0; i--){
    for (k=(n-i); k>0; k--)
      printf("\t");
    for (j=(2*i)-1; j>0; j--)
      printf("*\t");
    printf("\n");
  }
  return 0;
}