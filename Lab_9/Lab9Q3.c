/*
    Program Description: A program working with pointer variables

    Author: Amanda Ajredini

    Date: 05/12/2023
*/

#include <stdio.h>

int main ()
{
    float input1 = 8.6;
    float input2 = 15.3;
    float *ptr1;
    float *ptr2;


    //part a) - print address of input 1 and input 2
    printf("The address location of input1 is %p\n", &input1);
    printf("The address location of input2 is %p\n", &input2);


    //part b) - print address of ptr1 and ptr2
    printf("The address location of ptr1 is %p\n", &ptr1);
    printf("The address location of ptr2 is %p\n", &ptr2);


    //part c) - make the pointers point to the input variables and display their contents
    ptr1 = &input1;
    ptr2 = &input2;
    
    printf("The contents of ptr1 is %p\n", ptr1);
    printf("The contents of ptr2 is %p\n", ptr2);


    //part d) - display contents of ptr1 and ptr2 using dereference operator
    printf("The contents of *ptr1 is %.1f\n", *ptr1);
    printf("The contents of *ptr2 is %.1f\n", *ptr2);

    return 0;

}//end main