/* Write a program which will take an integer N as input from user and print Fibonacci series up
to N. If user gives input N=15,You should print -0 1 1 2 3 5 8 13
*/
#include<stdio.h>
int main(){
    int num,fiboNum,first=0,second=1;
    printf("Enter Your Desire Number: \n");
    scanf("%d" ,&num);
    while (first<=num)
    {
        printf("%d ",first);
        fiboNum=first;
        first=second;
        second=second+fiboNum;
        
    }
    

    return 0;
}