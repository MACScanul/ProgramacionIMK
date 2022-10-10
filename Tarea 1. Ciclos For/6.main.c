/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main ()
{
    int n=0;
    int suma=0;
    printf("Input upper limit:\n");
    scanf("%d", &n);

    printf("Sum of natural numbers 1-%d:\n", n);

    for(int i=0; i<=n; i++)
    {

        suma= suma+i;
    } 
    
    printf("%d\n", suma);
    
    return(0);
}