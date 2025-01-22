/*

Program Description: A program working with structures (passing by value & reference)

Author: Amanda Ajredini

Date: 19/03/2024

*/

// Header Files
#include <stdio.h>

// Structure Tenplates
struct passengerInfo
{
    char airline[21];
    char flightNumber[7];
    char surname[21];
    char seat[4];
    char destination[21];
    int bags;
};

// Function Signatures
void enter(struct passengerInfo *); // pass by reference
void display(struct passengerInfo); // pass by value

int main ()
{
    struct passengerInfo passenger1, passenger2;


    printf("Enter details of first passenger:\n\n");
    enter(&passenger1);
    printf("Enter details of second passenger:\n\n");
    enter(&passenger2);

    printf("Details of first passenger:\n\n");
    display(passenger1);
    printf("Details of second passenger:\n\n");
    display(passenger2);

    return 0;
}

void enter(struct passengerInfo *ptr)
{
    // ask passenger to enter various flight data and store them in relevant parts of structure variable using scanf
    printf("Airline name:\n");
    scanf("%s", ptr -> airline);

    printf("Flight number:\n");
    scanf("%s", ptr -> flightNumber);

    printf("Surname:\n");
    scanf("%s", ptr -> surname);

    printf("Seat number:\n");
    scanf("%s", ptr -> seat);

    printf("Destination:\n");
    scanf("%s", ptr -> destination);

    printf("No. of bags:\n");
    scanf("%d", &ptr -> bags);
}

void display(struct passengerInfo passenger)
{
    printf("\nAirline name: %s", passenger.airline);
    printf("\nFlight Number: %s", passenger.flightNumber);
    printf("\nSurname: %s", passenger.surname);
    printf("\nSeat number: %s", passenger.seat);
    printf("\nDestination: %s", passenger.destination);
    printf("\nNo. of bags: %d\n", passenger.bags);
}