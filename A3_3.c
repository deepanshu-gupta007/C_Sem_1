#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, j, n, temp;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for (j=0; j<n; j++) {
    for (i=0; i<n; i++) {
      if (i!=n-1){
        if (arr[i]>arr[i+1]) {
          temp=arr[i+1];
          arr[i+1]=arr[i];
          arr[i]=temp;
        }
      }
    }
  }
  printf("Sorted Array: \t");
  for (i=0; i<n; i++) 
    printf("%d\t", arr[i]);
  return 0;
}