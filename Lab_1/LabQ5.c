/*
  Program Description: Program to see the difference an incorrect delimiter makes to a program.

  Author: Amanda Ajredini

  Date: 26/09/2023
*/

#include <stdio.h>

int main()
{
    int var1;
    float var2;
    char var3;


    var1 = 8;
    var2 = 97.4;
    var3 = 'b';

    printf("var1 contains %f\nvar2 contains %c\nvar3 contains %d",var1,var2,var3);

    return 0;
}