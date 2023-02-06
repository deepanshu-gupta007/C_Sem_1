#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, n;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  printf("Even Elements: \t");
  for (i=0; i<n; i++) {
    if (arr[i]%2==0)
      printf("%d\t", arr[i]);
  }
  printf("\nOdd Elements: \t");
  for (i=0; i<n; i++) {
    if (arr[i]%2!=0)
      printf("%d\t", arr[i]);
  }printf("\n");
  return 0;
}