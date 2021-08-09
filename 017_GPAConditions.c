/* Take value from user and assume that.it is the number of his math exam.
Now you have to write a program which shows the grade depending on the given scale.
(A+:80-100, A:70-79, A-:60-69,B:50-59;C:40-49,D:33-39,F:0-32)
*/
#include<stdio.h>
int main()
{
    double gpa;
    printf("Enter Your GPA: \n");
    scanf("%lf",&gpa);
    if(gpa>=80){
        printf("Your GPA is : A+ \n");
    }
    else if (gpa>=70)
    {
        printf("Your GPA is: A\n");
    }
    else if (gpa>=60)
    {
        printf("Your GPA is : A-\n");
    }
    else if (gpa>=50)
    {
        printf("Your GPA is: B\n");
    }
    else if (gpa>=40)
    {
        printf("Your GPA is: C\n");
    }
    else if (gpa>=33)
    {
        printf("Your GPA  is : D\n");
    }
    else
    {
        printf("Your Fail!\n");
    }
    
    
    
    

    return 0;
}