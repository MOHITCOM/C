// TO PRINT FUNDAMENTAL DATATYPES THEIR VALUES USING SIZEOF()OPERATOR.
#include<stdio.h>
int main(void)
{
  // for integer and character
  int a; // integer:%d ya %i
  char b; //character:%c
  
  // for float and double
  float c; //float:%f
  double d; //double:%lf

  // for void e:no any format
  /*
   Note: 'void' variables cannot be declared (e.g.,void voidvar; is illegal ).
   we can evalute the size of the void type directly using sizeof(void). 
  */ 

  // %zu : this is the official and safe standard to print values returned by sizeof().
  
  
  printf(" The Sizeof Integer variable a in Bytes : %zu\n",sizeof(a));
  printf("The Sizeof Charecter variable b in Bytes %zu\n",sizeof(b));
  printf("The Sizeof float variable c in Bytes %zu\n",sizeof(c));
  printf("The Sizeof double variable d in Bytes %zu\n",sizeof(d));
  printf("The Sizeof void variable e in Bytes %zu\n",sizeof(void));
 
  return 0;
  /* others format specifiers
  short int:%hd
  unsigned int:%u
  long int:%ld
  long long int:%lld
  long double:%Lf
  char[] (string):%s
  octal:%o
  hexadecimal:%x
  pointer:%p
  */
}