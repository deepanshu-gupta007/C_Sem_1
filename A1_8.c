#include<stdio.h>
void swap(int a, int b);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int a, b;
  printf("Enter a number and power:\n");
  scanf("%d %d", &a, &b);
  swap(a,b);
  return 0;
}
void swap(a, b) {
  int c;
  printf("Before Swapping,\nA = %d and B = %d\n", a, b);
  c=a, a=b, b=c;
  printf("After Swapping,\nA = %d and B = %d\n", a, b);
}