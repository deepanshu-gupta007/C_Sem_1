#include<stdio.h>
int main(){
  char x;
  printf("Enter a character: ");
  scanf("%c", &x);
  if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    printf("%c is a vowel\n", x);
  else
    printf("%c is a constant\n", x);
  return 0;
}