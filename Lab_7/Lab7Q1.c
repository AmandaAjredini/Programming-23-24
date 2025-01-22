/*
    Program Description: A program displaying contents of arr[8]

    Author: Amanda Ajredini

    Date: 14/11/2023
*/

#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        arr[i] = 9 - i;
    }//end for
    // Display the contents of arr[8]

    printf("\nContents of arr[8] is %d", arr[8]);

    for (i = 0; i < 10; i++)
    {
        arr[i] = arr[ arr[i] ];
    }//end for
    // Display the contents of arr[8]

    printf("\nContents of arr[8] is %d", arr[8]);

    return 0;
}//end main