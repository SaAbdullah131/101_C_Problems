// Average of four subjects  and print it up to 2 digit after the decimal point.
#include<stdio.h>
int main()
{
    float math=83.50,programming=85.75,physics=65.00,English=67.50,avg;
    avg=(math+physics+programming+English)/4;
    printf("Result is: %.2f\n",avg);



    return 0;
}