/*
Program Description: Printing 10 stars using a function

Author: Amanda Ajredini

Date: 30/01/2024
*/

#include <stdio.h>

//Function signature
void highestLowest(int, int, int);

//beginning of main() function

int main()
{
    int num1, num2, num3 = 0;


    printf("Enter 3 whole numbers:\n");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    highestLowest(num1, num2, num3);

    return 0;

}//end main()

void highestLowest(int n1, int n2, int n3)
{

    int highest, lowest = 0;

    if (n1 > n2 && n1 > n3)
    {   
        highest = n1;

    }//end if
    else if (n2 > n1 && n2 > n3)
    {
        highest = n2;

    }//end else if
    else
    {
        highest = n3;

    }//end else

    if (n1 < n2 && n1 < n3)
    {
        lowest = n1;

    }//end if
    else if (n2 < n1 && n2 < n3)
    {
        lowest = n2;

    }//end else if
    else
    {
        lowest = n3;

    }//end else

    printf("The highest number is %d\n", highest);
    printf("The lowest number is %d\n", lowest);
    
}//end highestLowest

