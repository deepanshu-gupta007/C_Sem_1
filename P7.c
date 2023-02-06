#include<stdio.h>
int main() {
  float m1,m2,m3,m4,m5,avg;
  printf("Enter marks:\n");
  scanf("%f %f %f %f %f",&m1, &m2, &m3, &m4, &m5);
  avg=(m1+m2+m3+m4+m5)/5;
  printf("Percentage = %f\n", avg);
  return 0;
}