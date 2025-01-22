/*
  Program Description: Program to Calculate the sum of Integers and average of Floating-Point Integers.
  
  Author: Amanda Ajredini

  Date: 03/10/2023
*/

#include <stdio.h>

int main()
{
  int var1;
  int var2;
  int var3;
  int var4;
  int var5;
  int sum1;
  float total;
  float sum2;


  var1 = 1;
  var2 = 2;
  var3 = 3;
  var4 = 4;
  var5 = 5;
  total = 1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2.0;

  // Calculate the sum of integers 1-5//
  sum1 = var1 + var2 + var3 + var4 + var5;

  printf("The Sum of Integers 1-5 is %d", sum1);

  //Calcuate the average of floating-point integers 1.0-2.0//
  sum2 = total/11;

  printf("\nThe Average of Integers 1.0 - 2.0 is %.2f", sum2);

  return 0;
}
