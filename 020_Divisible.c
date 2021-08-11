// Take an integer number as input from user and print "Yes" if the number is divisible by 3 and 5. And print "No" if the number is not.

#include<stdio.h>
int main(){

    int number;
    printf("Enter Your desire Number: \n");
    scanf("%d",number);
    if (number%3==0 && number%5==0)
    {
        printf("Yes. It's divisible by 3 and 5");
    }
    else
    {
        printf("No.It's not divisible by 3 and 5");
    }

    return 0;    
}