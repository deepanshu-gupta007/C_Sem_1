#include<stdio.h>
int main() {
  int i=1, sum=0, avg;
  while (i<=5) {
    sum+=i;
    i++;
  }
  avg=sum/5;
  printf("Sum = %d\n", sum);
  printf("Average = %d\n", avg);
  return 0;
}