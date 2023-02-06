#include <stdio.h>
int main() {
  float bill,dis,fba;
  printf("Enter amount in the bill: ");
  scanf("%f", &bill);
  if (bill<=1000)
    dis=0.2*bill;
  else if (bill>1000 && bill<=2000)
    dis=0.1*bill;
  else if (bill>2000 && bill<=3000)
    dis=0.05*bill;
  else
    dis=0;
  fba=bill-dis;
  printf("Final amount = %f\n", fba);
  return 0;
}