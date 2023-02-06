#include<stdio.h>
void fact(int n);
int main() {
  printf("------------DETAILS------------\n");
  printf("Name: Deepanshu Gupta\nRoll No.: 51\n");
  printf("------------OUTPUT-------------\n");
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Factors of %d = ", num);
  fact(num);
  return 0;
}
void fact(int n) {
  int i;
  while (n!=1){
    for (i=2; i<=n; i++){
      if (n%i==0){
        printf("%d\t", i);
        n/=i;
        break;
      }
    }
  }
  printf("\n");
}