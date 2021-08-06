/* Write a program that take double variable x,y,z and avg. Assign values to x,y and z as you want.Now Calculate the average of x,y and z and assign it to avg.Finally Print the average values
*/
#include<stdio.h>
int main()
{
    double x=10,y=20,z=30,avg;
    avg=(x+y+z)/3;
    printf("Average of x, y and z is: %.2lf\n",avg);

    return 0;
}