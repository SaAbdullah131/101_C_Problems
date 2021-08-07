// Take two  integer variables i=0 and j=0. Now write the output of the following program without running the code

#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    j=i++ + ++i; //j=i++=0+1=1 + ++i=1+1=2, j=2, and i=2
    
    printf("%d %d\n",i,j);

    return 0;
}