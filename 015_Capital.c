// Take a small letter alphabet as input from the user and print the capital version of the letter.[If user gives input 'a' you should print'A']

#include<stdio.h>
int main()
{
    char letter;
    printf("Enter small letter: \n");
    scanf("%c",&letter);
    printf("Capital Letter: %c\n",letter -32);

    return 0;
}