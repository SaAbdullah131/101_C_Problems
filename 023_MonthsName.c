// Write  a program that takes an integer as input [1-12] and print the corresponding month name.[If user gives input '1' you should print 'January']
#include<stdio.h>
int main()
{
    int number;
    printf("Enter Month Number:\n");
    scanf("%d",&number);
    if(number==1){
        printf("January\n");
    }
    else if (number==2)
    {
        printf("February\n");
    }
    else if (number==3)
    {
        printf("March\n");
    }

    else if (number==4)
    {
        printf("April\n");
    }
    else if (number==5)
    {
        printf("May\n");
    }
    else if (number==6)
    {
        printf("June\n");
    }
    else if (number==7)
    {
        printf("July\n");
    }
    else if (number==8)
    {
        printf("August\n");
    }
    else if (number==9)
    {
        printf("September\n");
    }

    else if (number==10)
    {
        printf("October\n");
    }
    else if (number==11)
    {
        printf("November\n");
    }

    else
    {
        printf("December\n");
    }
    

    return 0;
}