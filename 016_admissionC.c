// Suppose you are going to apply for admission in a college. If you got GPA 5 in SSC exam then you can apply for that college .Now give Your GPA as input from the keyboard and print "YES".If you can apply otherwise print "NO".

#include<stdio.h>
int main()
{
 double YourGpa;
 printf("Enter Your GPA (2.90 5.00): \n");
 scanf("%lf",&YourGpa);
 if (YourGpa<5.00)
 {
     printf("No\n");
 }
 else
 {
     printf("YES\n");
 }
 

    return 0;
}