/*
  Program Description: A program asking user their age in years and calculating how many beats their heart has made so far in their life.
  
  Author: Amanda Ajredini

  Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    int age = 0;
    int bpm = 75;
    long sum = 0;

    // Ask user to enter their age
    printf("Please enter your age\n");
    scanf("%d", &age);

    // bpm = 75 therfore beats per year is 75 x 60 x 24 x 365 and then multiplied by age entered
    sum = bpm*60*24*365*age;

    printf("Your heart has beat %li times in your life.", sum);

    return 0;
}