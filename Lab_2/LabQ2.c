/*
  Program Description: Program to Calculate and Display the Volume and Surface Area of a Box and the Area of a Circle.
  
  Author: Amanda Ajredini

  Date: 03/10/2023
*/

#include <stdio.h>

int main()
{
  int height;
  float length;
  float width;
  float volume;
  float area1;
  float radius;
  float pi;
  float area2;


  height = 10;
  length = 11.5;
  width = 2.5;
  radius = 4.8;
  pi = 3.14;

  //Calcuate the volume of the box using volume formula//
  volume = (height*length*width);

  //Calculate the surface area of the box using surface area formula//
  area1 = 2*(length*width) + 2*(length*height) + 2*(height*width);

  printf("Volume of Box is %.2f\nSurface Area of Box is %.2f",volume ,area1);

  //Calculate the area of a circle using area of circle formula//
  area2 = pi*(radius*radius);

  printf("\nArea of Circle is %.2f", area2);

  return 0;
}

