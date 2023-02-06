#include<stdio.h>
int main() {
  float B, x;
  printf("Enter amount in bank and withdraw amount:\n");
  scanf("%f %f",&B, &x);
  B=B-x-(0.2*x);
  printf("Final Amount = %f\n", B);
  return 0;
}