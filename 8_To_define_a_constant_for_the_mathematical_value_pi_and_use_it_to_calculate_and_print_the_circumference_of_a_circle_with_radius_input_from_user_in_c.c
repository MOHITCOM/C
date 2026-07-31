#include<stdio.h> 
int main(void)
{
  // Circumference of a Circle is : 2*pi*r
  const float PI = 3.14159;
  float circumference , radius;
  printf("Area of a Circumference : 2*pi*r \n");
  printf("\nEnter Radius : ");
  scanf("%f",&radius);
  circumference = 2*PI*radius;
  printf("\nThe Area of a Circumference :%f",circumference);
  return 0;

}