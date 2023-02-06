#include<stdio.h>
int main() {
  int n, i, j, k, gap=0;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for (i=n; i>0; i--) {
    for(k=0; k<gap; k++)
      printf("\t");
    for (j=i; j>0; j--)
      printf("%d\t", i);  
    printf("\n");
    gap++;
  }
  return 0;
}