// Write a program which determines whether a number is odd or even.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter Your desire number: \n");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    

    return 0;
}