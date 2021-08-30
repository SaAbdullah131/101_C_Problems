// find Summation and average of all the numbers which are completely divisible by 3, 5 and 12 between 10 -500 [like 60 is divisible by all of these]

#include<stdio.h>
int main()
{
    int i,sum=0,count=0;
    float avg;
    for ( i = 10; i<=500; i++)
    {
        if (i%3==0 && i%5==0 && i%12==0)
        {
            sum=sum+i;
            count++;
        }
        
    }
    avg=sum/count;
    printf(" Average is: %.2lf\n",avg);


    return 0;
}