#include<stdio.h>
int main(){
  int n1, n2, n3, l, i;
  printf("Enter positive numbers:\n");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1>n2 && n1>n3){
    printf("Largest Number: %d\n", n1);
    l=n1;
  }
  else if (n2>n3){
    printf("Largest Number: %d\tn", n2);
    l=n2;
  }
  else{ 
    printf("Largest Number: %d\n", n3);
    l=n3;
  }
  printf("Ascending Order: ");
  for(i=1; i<=l; i++){
    if (n1==i || n2==i || n3==i)
      printf("%d\t", i);
  }
  printf("\n");
  return 0;
}