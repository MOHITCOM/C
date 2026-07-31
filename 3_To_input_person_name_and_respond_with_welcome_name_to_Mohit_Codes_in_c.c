#include<stdio.h>
int main(void)
{
  char name[100];
  printf("Please Enter your Name :\n");
  //full name use in underscore ex: Mohit_Kushwaha
  scanf("%s",&name);
  printf("Hello & Welcome %s to Mohit Codes",name);
  return 0;
}