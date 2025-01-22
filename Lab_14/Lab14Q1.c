/*

Program Description: A program working with strings

Author: Amanda Ajredini

Date: 20/02/2024

*/

#include <stdio.h>
#include <string.h>

int main()
{

        // Question 1
    /*
    printf("%5s", "abcd");
    printf("%5s", "abcdef");
    printf("%-5s", "abc");
    printf("%5.2s", "abcde");
    printf("%-5.2s", "abcde");
    */
        // Question 2
    /*
    char name[] = {'R', 'o', 'b', 'e', 'r', 't'}; // no null character?
    puts(name);
    scanf("%s", &name); // no ampersand needed
    *(name + 5) = "a";
    name = "Philip"; // need brackets of array
    */


        // Question 3
    /*
    char *text = "some text";

    printf("%s\n", text);
    printf("%c\n", *text);
    printf("%c\n", *"more text");
    printf("%c\n", *(text + 1));
    printf("%s", text + 1);
    printf(text);
    *(text + 4) = '\0'; printf("\n%s\n", text);
    printf("%c", "text"[2]);
    printf("%s", "text" + 2);
    */

        // Question 5
    /*
    char *p = "abcd";
    while(*p)
        putchar(*p++);
    
    char *text = "abcd";
    char *p = text;
    p += strlen(p) - 1;
    while(text <= p)
        puts(p--);
    */
    return 0;
}