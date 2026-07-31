#include<stdio.h>
int main(void)
{
  char first_name[100];
  char last_name[100];
  int age;
  printf("Please \nEnter your  First Name ");
  scanf("%s",&first_name);
  printf("\nEnter your Last Name ");
  scanf("%s",&last_name);
  printf("\nEnter your Age ");
  scanf("%d",&age);
  printf("\nHello & Welcome Mr|Ms \n%s %s \nAge is %d",first_name,last_name,age);
  return 0;
}