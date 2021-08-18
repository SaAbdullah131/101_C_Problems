/* Write a program to print the following output
*
Black line
*** 
Black Line
****
Black Line
*****
Black Line 
******
*/
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=7; i++)
    {
       for ( j = 1; j <=i; j++)
       {
           if (i%2==0)
           {
               printf("Black Line\n");
               break;
           }
          else
          {
              printf("*");
          }
       }
          printf("\n");
           
           
       }
      return 0; 
    }
    

