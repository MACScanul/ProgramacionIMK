/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main ()
{
    int n=0;
    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d:\n", n);

    for(int i=n; i>=1; i--)
    {
        printf("%d, ", i);
    } 

    return(0);
}