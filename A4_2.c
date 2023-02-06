#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, j, n, loop=0, count=0;
  printf("Enter the order of a matrix: ");
  scanf("%d", &n);
  int arr[n][n];
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      printf("Enter element of row %d and column %d: ", i+1, j+1);
      scanf("%d", &arr[i][j]);
    }
  }
  for (i=1; i<n; i++) {
    for (j=0; j<i; j++) {
      loop++;
      if (arr[i][j]==0)
        count++;
    }
  }
  for  (i=0; i<n; i++) {
    for (j=0; j<n; j++)
      printf("%d\t", arr[i][j]);
    printf("\n");
  }
  if (count==loop)
    printf("Yes, given matrix is upper triangular\n");
  else
    printf("No, given matrix is not upper triangular\n");
  return 0;
}