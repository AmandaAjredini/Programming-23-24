/*

Program Description: A program working with structures

Author: Amanda Ajredini

Date: 19/03/2024

*/

// Header Files
#include <stdio.h>

#define SIZE 21

// Structure Templates
struct cityInfo
{
    char name[SIZE];
    int population;
    int rainfall;
    int sunshine;
};

int main()
{
    struct cityInfo city1;
    struct cityInfo *ptr;

    ptr = &city1;

    // ask user to enter various city data and store them in relevant parts of structure variable using scanf
    printf("Enter city name:\n");
    scanf("%s", city1.name);

    printf("Enter population:\n");
    scanf("%d", &city1.population);

    printf("Enter annual rainfall(mm):\n");
    scanf("%d", &city1.rainfall);

    printf("Enter annual sunshine(hours):\n");
    scanf("%d", &city1.sunshine);

    // displaying the city data
    printf("City name: %s\n", ptr -> name );
    printf("Population: %d\n", ptr -> population);
    printf("Annual Rainfall(mm): %d mm\n", ptr -> rainfall);
    printf("Annual Sunshine: %d hours\n", ptr -> sunshine);

    return 0;
}