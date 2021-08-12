// Write a program that print maximum number from three input number

#include<stdio.h>
int main()
{ int a,b,c;
printf("Enter Your Desire Number: \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b>c){
printf("%d",a);
}
else if(a<b<c)
{
printf("%d",c);
}
else{
printf("%d",b);
}
    return 0;
}
