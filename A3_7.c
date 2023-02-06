#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, j, n1, n2, temp;
  printf("Enter the length of array 1: ");
  scanf("%d", &n1);
  int arr1[n1];
  for (i=0; i<n1; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr1[i]);
  }
  for (j=0; j<n1; j++) {
    for (i=0; i<n1; i++) {
      if (i!=n1-1) {
        if (arr1[i]>arr1[i+1]) {
          temp=arr1[i+1];
          arr1[i+1]=arr1[i];
          arr1[i]=temp;
        }
      }
    }
  }
  printf("Sorted Array 1: \t");
  for (i=0; i<n1; i++) 
    printf("%d\t", arr1[i]);
  printf("\n");
  printf("Enter the length of array 2: ");
  scanf("%d", &n2);
  int arr2[n2];
  for (i=0; i<n2; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr2[i]);
  }
  for (j=0; j<n2; j++) {
    for (i=0; i<n2; i++) {
      if (i!=n2-1) {
        if (arr2[i]>arr2[i+1]) {
          temp=arr2[i+1];
          arr2[i+1]=arr2[i];
          arr2[i]=temp;
        }
      }
    }
  }
  printf("Sorted Array 2: \t");
  for (i=0; i<n2; i++) 
    printf("%d\t", arr2[i]);
  printf("\n");
  int n3=n1+n2;
  int arr3[n3];
  for (i=0; i<n3; i++) {
    if (i<n1)
      arr3[i]=arr1[i];
    else if (i>=n1)
      arr3[i]=arr2[i-n1];
  }
  printf("Merged Array 3: \t");
  for (i=0; i<n3; i++) 
    printf("%d\t", arr3[i]);
  printf("\n");
  for (j=0; j<n3; j++) {
    for (i=0; i<n3; i++) {
      if (i!=n3-1) {
        if (arr3[i]>arr3[i+1]) {
          temp=arr3[i+1];
          arr3[i+1]=arr3[i];
          arr3[i]=temp;
        }
      }
    }
  }
  printf("Sorted Array 3: \t");
  for (i=0; i<n3; i++) 
    printf("%d\t", arr3[i]);
  printf("\n");
  return 0;
}