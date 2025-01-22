/* 

Lab Test 1

Program Description: This program will randomly generate a number between 1 - 25 and ask the user to enter a number between 1 - 25. 
It will then compare the two numbers. 
The program will execute 5 times and keep track of the number of times the numbers were guessed the same, too low and too high.
The program will end once the user guesses the correct number.
At the end, the program will display all of the user's guess attempts entered.

Author: Amanda Ajredini

Date: 28/11/23 

*/


#include <stdio.h>
#include <stdlib.h> //this header file is required for the rand() function
#include <time.h> //used in srand() for seeding purposes

#define MAX_ATTEMPTS 5

int main()
{
    int num = 0;
    int guessHistory[MAX_ATTEMPTS];
    int userInput = 0;
    int i = 0;

    
    printf("\n\nGuessing Game\n\n");


    //use do while loop to loop the game 5 times and make sure it loops ATLEAST once
    do
    {   
        //ask user to enter a number between 1 - 25
		printf("\n\nEnter a number between 1 - 25: ");
		scanf("%d", &userInput);


        //use this to make sure any white space characters aren't taken into consideration when user enters their input
        while(getchar() != '\n');


        printf("Generating a random number between 1 - 25 \n");
        //seed the random number generator with a range 0 – large number
        srand(time(NULL));


        //num is assigned a random number between 1 – 25
        num = (rand() % 25) + 1;


        //display random number generated to show if the game works
        printf("\n\nThe random number generated is %d", num);


        //use if/else statements to check if the users guess is the same, too low or too high compared to the random number generated
        if(userInput == num)
		{
			printf("\nNumbers are the same, yay! :D");
		
			//use the array to store the user's guesses
			guessHistory[i] = userInput;

            break;
            
		}//end if
        else if (userInput < num)
        {
            printf("\nNumber you entered is too low :(");

            //use the array to store the user's guesses
			guessHistory[i] = userInput;

        }//end else if
		else
		{
			printf("\nNumber you entered is too high :(");
		
			//user the array to store the user's guesses
			guessHistory[i] = userInput;
			
		}//end else
		
		//increment i so that the loop can execute 5 times
		i++;


    }//end do while
    while (i < MAX_ATTEMPTS);
    

    //use for loop to display the all the attempts the user made
    for (i = 0; i < MAX_ATTEMPTS; i++)
    {   
        printf("\n\nYou guessed: %d", guessHistory[i]);

        //use if statement to only display the guesses answered up until the number is guessed correctly
        if (guessHistory[i] == userInput)
        {
            break;
        }//end if
        
    }//end for

    printf("\n\nGAME OVER!!");
    
    return 0;
    
} // end main