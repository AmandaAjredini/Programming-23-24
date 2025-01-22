/*
  Program Description: Program to Calculate and Display the Volume of a Cube.
  
  Author: Amanda Ajredini

  Date: 03/10/2023
*/

#include <stdio.h>

int main()
{
  float length;
  float volume;


  length = 2.8;

  // Calculate the volume using volume of a cube formula//
  volume = length*length*length;

  printf("Volume of Cube is %.2f", volume);

  return 0;
}
