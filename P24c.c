#include<stdio.h>
int main() {
  int i=1, sum=0, avg;
  do {
    sum+=i;
    i++;
  } while (i<=5);
  avg=sum/5;
  printf("Sum = %d\n", sum);
  printf("Average = %d\n", avg);
  return 0;
}