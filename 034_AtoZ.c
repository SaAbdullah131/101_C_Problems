// Write a program that will print A to Z using loop
#include<stdio.h>
int main(){
    // Capital A To Z letter
    char chr;
    for ( chr = 'A'; chr <='Z'; chr++)
    {
        printf("%c ",chr);
    }
    printf("\n");
    // Samll a to z letter
    char var;
    for ( var = 'a'; var <='z'; var++)
    {
        printf("%c ",var);
    }
    
    printf("\n");
    
    return 0;
}