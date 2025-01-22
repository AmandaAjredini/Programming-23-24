/*
    Program Description: A program that reads in a single numeral from the keyboard and displays its value as a word.

    Author: Amanda Ajredini

    Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int num = 0;


    printf("Enter a one digit number: \n");
    scanf("%d", &num);

    switch(num)
    {
        case 0:
        {
            printf("Zero");

            break;
        }//end case 0

        case 1:
        {
            printf("One");

            break;
        }//end case 1

        case 2:
        {
            printf("Two");

            break;
        }//end case 2

        case 3:
        {
            printf("Three");

            break;
        }//end case 3

        case 4:
        {
            printf("Four");

            break;
        }//end case 4

        case 5:
        {
            printf("Five");

            break;
        }//end case 5

        case 6:
        {
            printf("Six");

            break;
        }//end case 6

        case 7:
        {
            printf("Seven");

            break;
        }//end case 7

        case 8:
        {
            printf("Eight");

            break;
        }//end case 8
        
        case 9:
        {
            printf("Nine");

            break;
        }//end case 9

        default:
        {
            printf("You did not enter a single digit number.");

            break;
        }//end default

    }//end switch

    return 0;
}//end main