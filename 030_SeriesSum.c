// Write a program which will print the summation of the given series

#include<stdio.h>
int main(){
    int sum=0;
    for ( int i=101; i >=1; i-=2)
    {
        sum=sum+i;
        
    }
    printf("Sum is: %d\n",sum);
    
}