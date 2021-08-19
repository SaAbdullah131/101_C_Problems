// Write a program which will take an integer N from user and print all the numbers between N to -32. Stop your Your Program when user will give N=-1 as input.
#include<stdio.h>
int main(){
    int num,i;
    printf("Enter Your Desire Number: \n");
    scanf("%d",&num);
    if (num==-1)
    {
        return 0;
    }
    else if (num>-32)
    {
        for ( i = num; i>-32; i--)
        {
            printf("%d ",i);
        }
    }
       else{
           for ( i = num; i<-32; i++)
           {
               printf("%d",i);
           }
           
           
       } 
       return 0; 
    }
    


    return 0;
}