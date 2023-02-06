#include<stdio.h>
int main() {
  int n, i, j, num=1;
  char ch='A';
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for (i=1; i<=n; i++) {
    if (i%2!=0){
      for (j=1; j<=i; j++)
        printf("%d\t",num);
      num++;
    }else{
      for (j=1; j<=i; j++)
        printf("%c\t",ch);
      ch++;
    }
    printf("\n");
  }
  return 0;
}