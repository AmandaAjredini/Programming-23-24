/*
    Program Description: A program showing how pointers work

    Author: Amanda Ajredini

    Date: 21/11/2023
*/


#include <stdio.h>

int main()
{
    int var1;
    int *ptr;
    var1 = 1;
    ptr = &var1;


    printf("\n\nThe address of var1 is %p\n\n", &var1);
    printf("ptr contains %p\n\n", &ptr); 
    printf("*ptr contains %d\n\n", *ptr);

    return 0;
}



/*  Complete the above program and observe the output.

    What happens if you try to assign a pointer any address you pick randomly (e.g.,
    F176BA2)?

    a) Will the compiler allow you?

    b) If so, print the contents of that address and see what happens. Which delimiter
    should you use?

    c) Write a short program to declare an integer and a pointer. Make the pointer point to
    the integer. Input an integer value into the int variable. Using the dereference
    operator, output the contents of address stored in the pointer.

    d) Now, increment the pointer (e.g., ptr++) and output the contents of the new address
    stored in the pointer. What do you see? 
*/
