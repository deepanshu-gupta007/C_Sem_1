#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, n, sum=0;
  float avg;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
    sum+=arr[i];
  }
  avg=(float) sum/n;
  printf("Sum = %d and Average = %f\n", sum, avg);
  return 0;
}