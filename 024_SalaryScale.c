// Write a program that take rank number as  input and gives full salary range of that rank number people
#include<stdio.h>
int main()
{
    int rankNo;
    printf("Enter Your Salary Scale: \n");
    scanf("%d",&rankNo);
    if (rankNo==1)
    {
        printf("Your Salary: 2,50,000 BDT\n");
    }
    else if (rankNo==2)
    {
        printf("Your Salary : 2,10,000 BDT\n");
    }

    else if (rankNo==3)
    {
        printf("Your Salary : 1,50,000 BDT\n");
    }

    else if (rankNo==4)
    {
        printf("Your Salary : 80,000 BDT\n");
    }

    else if (rankNo>=5)
    {
        printf("Your Salary : 50,000 BDT\n");
    }
    
    
    return 0;

}