/*
    Program Description: A program asking the user to input a number between 1-7. Display the day of the week correspoding to the number entered.

    Author: Amanda Ajredini

    Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int num = 0;

    //Ask user to enter a number between 1-7
    printf("Enter a number between 1-7: \n");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
        {
            printf("Monday");

            break;
        }//end case 1

        case 2:
        {
            printf("Tuesday");

            break;
        }//end case 2

        case 3:
        {
            printf("Wednesday");

            break;
        }//end case 3

        case 4:
        {
            printf("Thursday");

            break;
        }//end case 4

        case 5:
        {
            printf("Friday");

            break;
        }//end case 5

        case 6:
        {
            printf("Saturday");

            break;
        }//end case 6

        case 7:
        {
            printf("Sunday");

            break;
        }//end case 7
        
        default:
        {
            printf("The number you have entered is not in the range of 1-7.");

            break;
        }// end default

    }//end switch

    return 0;

}//end main