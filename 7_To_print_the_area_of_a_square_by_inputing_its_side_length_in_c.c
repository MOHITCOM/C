#include<stdio.h>
int main(void)
{
  float area, side;
 
  printf("Area of a Square : side*side\n");
  printf("\nEnter your Side :");
  scanf("%f",&side);

   // Area of a Square = Side*Side.
  area = side * side ;

  printf("\nThe Area of a Square is %f",area);
  return 0;
}