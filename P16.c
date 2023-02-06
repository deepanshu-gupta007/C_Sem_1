#include<stdio.h>
int main() {
  int day, week=0, mon=0, year=0;
  printf("Enter number of days: ");
  scanf("%d", & day);
  year=day/365, day=day%365;
  mon=day/30, day=day%30;
  week=day/7, day=day%7;
  printf("It has %d years, %d months, %d weeks and %d days", year, mon, week, day);
  return 0;
}