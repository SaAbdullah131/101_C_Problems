//You are going to open a bank account . If your age is greater than 18 then ou can open an account .Get your age by input and print"YES" if you can open an acccount otherwise print"NO"
#include<stdio.h>
void main(){
    int age;
    printf("Enter Your Age: \n");
    scanf("%d",&age);
    if(age>18){
        printf("Yes. You can open an account\n");
    }
    else
    {
        printf("No .You can't open an account\n");
    }
    
    return 0;
}