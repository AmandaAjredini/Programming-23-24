/*
    Program Description: A program working with pointer variables and finding the sum of these numbers

    Author: Amanda Ajredini

    Date: 05/12/2023
*/

#include <stdio.h>

int main ()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int *ptr1;
    int *ptr2;
    int *ptr3;


    //ask user to enter two integers
    printf("\nEnter an integer: \n\n");
    scanf("%d", &num1);

    printf("Enter another integer: \n\n");
    scanf("%d", &num2);


    //make the pointers point to the regular variables
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;


    //add the contents of num1 and num2 by using dereference operator on the pointers
    *ptr3 = *ptr1 + *ptr2;

    //display the contents of ptr3 using derefernece operator (this should equal to the sum of num1 and num 2)
    printf("\nThe sum of %d and %d is %d", *ptr1, *ptr2, *ptr3);


    return 0;

}//end main