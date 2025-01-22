/*
  Program Description: Program that makes use of the Modulus Operator.
  
  Author: Amanda Ajredini

  Date: 03/10/2023
*/

#include <stdio.h>

int main()
{
  int sum1;
  int sum2;
  int sum3;
  int sum4;
  int sum5;
  int sum6;


  sum1 = 2 % 2;
  sum2 = 3 % 2;
  sum3 = 5 % 2;
  sum4 = 7 % 3;
  sum5 = 100 % 33;
  sum6 = 100 % 7;

  printf("2 modulus 2 = %d\n3 modulus 2 = %d\n5 modulus 2 = %d\n7 modulus 3 = %d\n100 modulus 33 = %d\n100 modulus 7 = %d", sum1, sum2, sum3, sum4, sum5, sum6);

  return 0;
}
