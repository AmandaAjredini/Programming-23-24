/*
    Program Description: A program showing how pointers work cont..

    Author: Amanda Ajredini

    Date: 21/11/2023
*/

#include <stdio.h>

int main()
{
    int var = 4;
    int *ptr;


    ptr = &var;

    printf("\nvar contains %d\n\n", *ptr);
    printf("ptr contains %p\n\n", &ptr);


    ptr = ptr + 1;

    printf("ptr contains %p\n\n", &ptr);
    
    *ptr = 10;

    printf("*ptr contains %d", *ptr);

    return 0;
}

/*  What happens if you try to assign a pointer any address you pick randomly (e.g., F176BA2)?

    a) Will the compiler allow you?

    b) If so, print the contents of that address and see what happens. Which delimiter
    should you use?

    c) Write a short program to declare an integer and a pointer. Make the pointer point to
    the integer. Input an integer value into the int variable. Using the dereference
    operator, output the contents of address stored in the pointer.

    d) Now, increment the pointer (e.g., ptr++) and output the contents of the new address
    stored in the pointer. What do you see?

    e) Can you assign any value to a random address (e.g., using the dereference operator,
    can you assign the value 10 into the address FB6546)? Try it
*/