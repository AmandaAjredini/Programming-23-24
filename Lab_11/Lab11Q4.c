/*
Program Description: A program showing the use of functions sum & average.

Author: Amanda Ajredini

Date: 30/01/2024
*/

#include <stdio.h>

// Function Signatures
int findSum(int, int, int);
float findAvg(int);

int main ()
{
    //initialising variables
    int num1, num2, num3 = 0;
    int sum = 0;
    float average = 0;

    //ask user to enter 3 numbers 
    printf("Enter 3 whole numbers:\n");

    //grab the numbers the user enters and put them into the corresponding variables
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //call the findSum function to return the sum of the 3 numbers entered
    sum = findSum(num1, num2, num3);

    printf("The sum of the 3 numbers is: %d\n", sum);

    //call the findAvg function to return the average of the 3 numbers
    average = findAvg(sum);

    printf("The average of the 3 numbers is: %.2f\n", average);

    return 0;

}//end main()

//beginning of findSum function
int findSum(int n1, int n2, int n3)
{
    int total = 0;

    //adding 3 numbers together to get the sum
    total = n1 + n2 + n3;

    return total;

}//end findSum()

//beginning of findAvg function
float findAvg(int total)
{
    float average = 0;

    //dividing the sum above by the amount of numbers to find average
    average = total/3;

    return average;

}//end findAvg()