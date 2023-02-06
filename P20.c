#include<stdio.h>
int main(){
  char x;
  printf("Enter something: ");
  scanf("%c", &x);
  if ((x>='a' && x<='z') || (x>='A' && x<='Z'))
    printf("%c is an alphabet\n", x);
  else if (x>='0' && x<='9')
    printf("%c is a number\n", x);
  else 
    printf("%c is a special character\n", x);
  return 0;
}