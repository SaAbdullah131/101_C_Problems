// Take two integer indicating the x and y coordinate of a two-dimensional graph paper where the centerpoint is x=0 and y=0.Now point the quadrant of the given point.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Two Number: \n");
    scanf("%d %d",&x,&y);
    if (x>0 && y>0)
    {
        printf("First Quadrant \n");
    }
    else if (x<0 && y>0)
    {
        printf("Second Quadrant\n");
    }
    
    else if (x<0 && y<0)
    {
        printf("Third Quadrant\n");
    }
    
    else if (x>0 && y<0)
    {
        printf("Fourth Quadrant\n");
    }
    
    return 0;
}