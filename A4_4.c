#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, j, k, r1, c1, r2, c2;
  printf("Enter number of rows in a matrix 1: ");
  scanf("%d", &r1);
  printf("Enter number of columns in a matrix 1: ");
  scanf("%d", &c1);
  printf("Enter number of rows in a matrix 2: ");
  scanf("%d", &r2);
  printf("Enter number of columns in a matrix 2: ");
  scanf("%d", &c2);
  printf("For Matrix 1:\n");
  int arr1[r1][c1];
  for (i=0; i<r1; i++) {
    for (j=0; j<c1; j++) {
      printf("Enter element of row %d and column %d: ", i+1, j+1);
      scanf("%d", &arr1[i][j]);
    }
  }
  printf("For Matrix 2:\n");
  int arr2[r2][c2];
  for (i=0; i<r2; i++) {
    for (j=0; j<c2; j++) {
      printf("Enter element of row %d and column %d: ", i+1, j+1);
      scanf("%d", &arr2[i][j]);
    }
  }
  printf("Given matrices: \n");
  printf("Matrix 1:\n");
  for  (i=0; i<r1; i++) {
    for (j=0; j<c1; j++)
      printf("%d\t", arr1[i][j]);
    printf("\n");
  }
  printf("Matrix 2:\n");
  for  (i=0; i<r2; i++) {
    for (j=0; j<c2; j++)
      printf("%d\t", arr2[i][j]);
    printf("\n");
  }
  if (c1==r2) {
    int multi[r1][c2];
    for(i=0; i<r1; i++) {
      for(j=0; j<c2; j++){
        int sum=0;
        for (k=0; k<r2; k++) 
          sum+=(arr1[i][k]*arr2[k][j]);
        multi[i][j]=sum;
      }
    }
    printf("Resultant Matrix:\n");
    for  (i=0; i<r1; i++) {
      for (j=0; j<c2; j++)
        printf("%d\t", multi[i][j]);
      printf("\n");
    }
  }
  else
    printf("Multiplication is not possible\n");
  return 0;
}