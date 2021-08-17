/* Take an integer as an input and print it's multiplication table up to 10. If user gives 5, your output should look like  the following example
5*1=5
5*2=10
..
*/
#include<stdio.h>
int main()
{
    int number, i;
    printf("Enter Your Desire Number: \n");
    scanf("%d",&number);

    for ( i = 1; i <=10; i++)
    {
        printf("%d*%d =%d\n",number,i,(number*i));
    }
    
   return 0; 
}