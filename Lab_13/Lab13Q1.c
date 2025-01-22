/*
Program Description: A program using pass by refernce with 2 functions; to calculate are of square and a circle

Author: Amanda Ajredini

Date: 13/02/2024
*/

//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5

//Function Signatures
float areaCircle(int *);
int areaSquare(int *);

int main()
{
    int length = 0;
    int radius = 0;
    float circleArea = 0;
    int squareArea = 0;


    // Ask user to enter length of square
    printf("Enter a length for a square: \n");
    scanf("%d", &length);

    // Ask user to enter radius of circle
    printf("Enter a radius for a circle: \n");
    scanf("%d", &radius);

    circleArea = areaCircle(&radius);
    squareArea = areaSquare(&length);

    // Displays the areas of both
    printf("\nArea of square is %d\n", squareArea);
    printf("\nArea of circle is %.1f\n", circleArea);

    return 0;

}// End main()

// Function to calculcate area of square
int areaSquare(int *square)
{
    int area = 0;

    area = (*square) * (*square); // length x width

    return area;

}// End areaSquare()

// Function to calculate area of circle
float areaCircle(int *circle)
{
    int area = 0;

    area = (3.14) * (*circle) * (*circle); // pi(radius)^2

    return area;

}// End areaCircle()



