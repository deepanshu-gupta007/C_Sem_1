#include<stdio.h>
int main() {
  int n, i, j;
  char ch='a';
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for (i=1; i<=n; i++) {
    for (j=1; j<=i; j++) {
      printf("%c\t", ch++);  
    }
    printf("\n");
  }
  return 0;
}