#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, j, k, n;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++) {
    for (j=i+1; j<n; j++) {
      if (arr[i]==arr[j]){
        n--;
        for (k=j; k<n; k++)
          arr[j]=arr[j+1];
      }
    }
  }
  printf("Array: \t");
  for (i=0; i<n; i++) 
    printf("%d\t", arr[i]);
  return 0;
}