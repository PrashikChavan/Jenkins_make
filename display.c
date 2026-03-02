#include "display.h"

void revNum(int num)
{
 int rev=0,rem;
 while(num!=0)
 {
  rem=num%10;
  rev=(rev*10)+rem;
  num/=10;
 }
 printf("number after rev is:%d",rev);
}
