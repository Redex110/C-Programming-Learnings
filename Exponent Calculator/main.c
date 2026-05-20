  /*
  --------------------------------------------------
  Program : Exponent Calculator
  Purpose : Calculate the power of number.

  Author  : Gray Storm
  Date    : 13 May 2026

  Input   : number and exponent : number = 2, exponent = 2.
  Output  : resutl of  2 power of 2 = 4
  --------------------------------------------------
  */

#include <stdio.h>

//Function to calculate the power
float power(float number, float exponent)
{
  float result = 1;
  while(exponent != 0)
  {
    result *= number;
    exponent--;
  }
  return result;
}


int main(void)
{
   float number, exponent;

   printf("-------------------------------------\n");
   printf("Enter the number   : ");
   scanf("%f", &number);

   printf("Enter the exponent : ");
   scanf("%f", &exponent);
   printf("-------------------------------------\n");
   printf("Result             : %.2f\n", power(number, exponent));
   printf("-------------------------------------\n");
   return 0;
}
