#include<stdio.h>
int main(void)
{
  int num1 , num2, swap;
 // num1=10;
 // num2=20;
 printf("\nEnter Number 1:");
 scanf("%d",&num1);
 printf("\nEnter Number 2:");
 scanf("%d",&num2); 
 printf("\nBefore Swaping \nnum1:%d \nnum2:%d",num1,num2);

  swap=num1;
  num1=num2;
  num2=swap;
  printf("\nAfter Swaping \nnum1:%d \nnum2:%d",num1,num2);
  return 0;
}