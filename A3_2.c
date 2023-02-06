#include<stdio.h>
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int i, n, j;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for (i=0; i<n; i++) {
    int count=0;
    for (j=0; j<n; j++) {
      if (arr[i]>=arr[j])
        count++;
    }
    if (count==1)
      printf("Smallest Element = %d\n", arr[i]);
    else if (count==n)
      printf("Largest Element = %d\n", arr[i]);
  }
  return 0;
}