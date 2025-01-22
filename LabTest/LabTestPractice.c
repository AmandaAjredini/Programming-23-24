/*
    Program Description: A program working with fibonacci sequence.

    Author: Amanda Ajredini

    Date: 27/11/2023
*/

#include <stdio.h>

int main ()
{
    int option = 0;
	int num1 = 1;
	int num2 = 0;
	int temp = 0;
    int i = 0;
	int term_number = 0;


    do
	{
		// Display the menu
		printf("\n\nThe Fibonacci Series program\n\n");
		printf("Enter your selection\n\n");
		printf("1. Enter the number of terms to display in the sequence.\n");
		printf("2. End Program\n");
		
		scanf("%d", &option);
		
		// Clear the buffer to ignore the "Enter" key used to select the menu option
		while(getchar() != '\n');
		
		// if the user selects a term to display the sequence
		if (option == 1)
		{
			// re-initialise the contents of these variables to display the sequence again for a different no. of terms
		    num1 = 1;
			num2 = 0;
			temp = 0;

			// Enter the number of terms in the sequence to display
			printf("\nEnter the number of terms you would like to be displayed of the sequence\n");
    		scanf("%d", &term_number);
    		
    		// display all numbers in the sequence up to this number of terms
    		printf("0, ");
    
    		for(i = 0; i < term_number; i++)
			{
				temp = num1 + num2;
				num1 = num2;
				num2 = temp;

				// the value of variable temp displays the next number in the sequence
				if (i != term_number -1)
				{
					// Display a comma after the sequence term being displayed as there is another number to follow
					printf("%d, ", temp);
				}
				else
				{
					// Display the last number in the sequence up to n terms WITHOUT a comma following it
					printf("%d", temp);
				}
				
				//printf("%d, ", temp);

			} // end for
			
		} // end if option = 1
		
		// if the user wishes to end the program
		if (option == 2)
		{
			printf("\n\n Program Ended");
			
		} // end if option = 2
		
	} // end do while
	while (option != 2);
	
	return 0;

} // end main()