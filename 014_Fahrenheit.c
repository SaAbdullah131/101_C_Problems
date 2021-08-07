//Take Temperature Of Dhaka city as input in Celsius scla form the user using scanf() function and convert it to Fahrenheit and print it.
#include<stdio.h>
int main()
{
    double Celsius, F;
    printf("Today's temperature in Dhaka: \n");
    scanf("%lf",&Celsius);
    F=Celsius*(9/5)+32;
    printf("Today Dhaka's temperature in Fahrenheit: %.2lf\n",F);

    return 0;

}