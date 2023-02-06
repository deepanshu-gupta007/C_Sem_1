#include<stdio.h>
int main() {
  int i, sum=0, avg;
  for (i=1; i<=5; i++)
    sum+=i;
  avg=sum/5;
  printf("Sum = %d\n", sum);
  printf("Average = %d\n", avg);
  return 0;
}