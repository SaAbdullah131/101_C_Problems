// Write a program to print 5 to 25 numbers square sum
#include<stdio.h>
int main(){
    int num, sum =0;
    for ( num = 5; num <=25; num++)
    {
        sum=sum+(num*num);
    }
    printf("Sumation of Num Square: %d \n",sum);
    
    return 0;
}