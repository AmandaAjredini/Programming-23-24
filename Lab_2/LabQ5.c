/*
  Program Description: Program to Calculate various Arithmetic Operations.
  
  Author: Amanda Ajredini

  Date: 03/10/2023
*/

#include <stdio.h>

int main()
{
  int sum1;
  int sum2;
  int sum3;
  float sum4;
  int sum5;

  
  sum1 = 15+10;
  sum2 = 15-10;
  sum3 = 15*10;
  sum4 = 15.0/10.0;
  sum5 = 15%3;

  printf("15+10= %d\n15-10= %d\n15*10= %d\n15/10= %.2f\n15 %% 3= %d", sum1, sum2, sum3, sum4, sum5);

  return 0;
}