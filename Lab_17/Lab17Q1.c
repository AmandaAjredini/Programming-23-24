/*

Program Description: Creating structure templates

Author: Amanda Ajredini

Date: 12/03/2024

*/

#include <stdio.h>

struct card
{
    int number;
    char suit[11];
};

struct stock
{
    int number;
    char description[21];
    int quantity;
};

struct book
{
    char ISBN[14];
    char title[31];
    char author[26];
    float price;
};

struct customer
{
    unsigned int number;
    char name[26];
    char address[46];
    double outstandingBalance;
};

struct transaction
{
    char type;
    int day;
    int month;
    int year;
    float amount;
};

struct co_ordinates
{
    int degrees;
    int minutes;
    char direction;
};

struct teamLeague
{
    char name[21];
    int homeWins;
    int homeDraws;
    int homeLosses;
    int awayWins;
    int awayDraws;
    int awayLosses;
};