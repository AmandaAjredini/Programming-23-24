/*
    Program Description: A program working with pointer variables

    Author: Amanda Ajredini

    Date: 05/12/2023
*/

#include <stdio.h>

int main()
{
    int num1 = 4;
    char char1 = 'a';
    int *ptr1;
    char *ptr2;
    int *ptr3;


    //store the address of num1 inside ptr1 (make ptr1 point at num1)
    ptr1 = &num1;

    //store the address of char1 inside ptr2 (make ptr2 point at char1)
    ptr2 = &char1;

    //store address of char1 inside ptr3 (this will turn out to be incompatible as ptr3 is initialised to point to an integer)
    ptr3 = &char1;


    //display the contents and address of num1 and char1
    printf("num1 contains %d at memory address %p\n\n", num1, &num1 );
    printf("char1 contains %c at memory address %p\n\n", char1, &char1);


    //display the contents of ptr1, ptr2 and ptr3
    printf("ptr1 contains %p\n\n", ptr1);
    printf("ptr2 contains %p\n\n", ptr2);
    printf("ptr3 contains %p\n\n", ptr3);


    //display contents of num1 and char 1 using the dereference operator
    printf("*ptr1 contains %d\n\n", *ptr1);
    printf("*ptr2 contains %c\n\n", *ptr2);

    //display contents of address stored in ptr3 with %d and %c
    printf("*ptr3 contains %c\n\n", *ptr3);

    return 0;

}//end main