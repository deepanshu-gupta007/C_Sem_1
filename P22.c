#include<stdio.h>
int main(){
  char a;
  printf("Enter a character: ");
  scanf("%c", &a);
  switch (a) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      printf("Vowel\n");
      break;
    default:
      printf("Constant\n");
  }
  return 0;
}