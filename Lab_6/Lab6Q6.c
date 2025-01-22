/*
    Program Description: A program that sorts an array in ascending order.

    Author: Amanda Ajredini

    Date: 07/11/2023
*/

#include <stdio.h>
#define SIZE 3

int main()
{
    int sort[SIZE];
    int i, t, j;


    printf("Enter %d integers: \n\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &sort[i]);
    }
    
    printf("\n\nYou entered: \n\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", sort[i]);
    }

    for(i = 0; i < SIZE; i++)
    {
        for(j = i + 1; j < SIZE; j++) 
        {   if(sort[i] > sort[j])
            {
                t = sort[i];
                sort[i] = sort[j];
                sort[j] = t;
            }
        }
    }

    printf("\n\nThe numbers sorted in ascending order are: \n\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", sort[i]);
    }

    return 0;
}