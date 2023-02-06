#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, n, temp;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for (i=0; i<=n/2; i++) {
    temp=arr[n-i-1];
    arr[n-i-1]=arr[i];
    arr[i]=temp;
  }
  printf("Reverse Array: ");
  for (i=0; i<n; i++) 
    printf("%d\t", arr[i]);
  return 0;
}