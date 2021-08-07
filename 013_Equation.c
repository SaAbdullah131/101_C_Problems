/* Take four integer variables a,b,x and y.Scan the values of the variables from user using scanf() function.Now print the output of the following equation.
(a*b)+(x*y)
*/
#include<stdio.h>
int main()
{
    int a,b,x,y;

    printf("Enter four Number: \n");
    scanf("%d %d %d %d",&a,&b,&x,&y);

    //printf("(%d * %d)+ (%d *%d)\n",a,b,x,y);
    printf("%d\n",(a*b)+(x*y));
    return 0;
}