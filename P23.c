#include<stdio.h>
int main() {
  int m;
  printf("Enter a month: ");
  scanf("%d", &m);
  switch (m) {
    case 1:
      printf("January = 31\n");
      break;
    case 2:
      printf("February = 28\n");
      break;
    case 3:
      printf("March = 31\n");
      break;
    case 4:
      printf("April = 30\n");
      break;
    case 5:
      printf("May = 31\n");
      break;
    case 6:
      printf("June = 30\n");
      break;
    case 7:
      printf("July = 31\n");
      break;
    case 8:
      printf("August = 31\n");
      break;
    case 9:
      printf("September = 30\n");
      break;
    case 10:
      printf("October = 31\n");
      break;
    case 11:
      printf("Novmber = 30\n");
      break;
    case 12:
      printf("December = 31\n");
      break;
    default:
      printf("Invalid\n");
  }
  return 0;
}