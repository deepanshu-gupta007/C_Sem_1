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
  printf("Given matrix: \n");
  for  (i=0; i<r; i++) {
    for (j=0; j<c; j++)
      printf("%d\t", arr[i][j]);
    printf("\n");
  }
  int tp[c][r];
  for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
      tp[j][i]=arr[i][j];
    }
  }
  printf("Transpose of given matrix: \n");
  for  (i=0; i<c; i++) {
    for (j=0; j<r; j++)
      printf("%d\t", tp[i][j]);
    printf("\n");
  }
  return 0;
}