#include<stdio.h>
int main(void)
{
  // Area of a Circle = pi*r*r
  const float PI = 3.14159;
  float area , radius ;
  printf("\nEnter Radius :");
  scanf("%f",&radius);
  area = PI*radius*radius;
  printf("\nThe Area of a Circle :%f",area);
  return 0;
}