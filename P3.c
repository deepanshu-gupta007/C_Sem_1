#include<stdio.h>
int main() {
  float p,r,t,si;
  printf("Enter principle rate and time:\n");
  scanf("%f %f %f", &p, &r, &t);
  si=p*r*t/100;
  printf("Simple Interest = %f\n", si);
  return 0;
}