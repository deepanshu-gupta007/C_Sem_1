#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, j, r, c;
  printf("Enter number of rows in a matrix: ");
  scanf("%d", &r);
  printf("Enter number of columns in a matrix: ");
  scanf("%d", &c);
  int arr[r][c];
  for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
      printf("Enter element of row %d and column %d: ", i+1, j+1);
      scanf("%d", &arr[i][j]);
    }
  }
  //Sum of each row
  for(i=0; i<r; i++) {
    int sum=0;
    for (j=0; j<c; j++)
      sum+=arr[i][j];
    printf("Sum of row %d = %d\n", i+1, sum);
  }
  //Sum of each column
  for(i=0; i<c; i++) {
    int sum=0;
    for (j=0; j<r; j++)
      sum+=arr[j][i];
    printf("Sum of column %d = %d\n", i+1, sum);
  }
  //Sum of diagonal elements
  int sum=0;
  for(i=0; i<r; i++) {
    for (j=0; j<c; j++){
      if (i==j)
        sum+=arr[i][j];
    }
  }
  printf("Sum of diagonal elements = %d\n", sum);
  return 0;
}