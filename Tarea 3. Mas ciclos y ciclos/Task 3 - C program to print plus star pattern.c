/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
   int i, j, N;

    printf("Input N:  ");
    scanf("%d", &N);

    
    for(i=1; i<=(N * 2 - 1); i++)
    {
        
        if(i == N)
        {
            for(j=1; j<=(N * 2 - 1); j++)
            {
                printf("+");
            }
        }
        else
        {
            for(j=1; j<=N-1; j++)
            {
                printf(" ");
            }
            printf("+");
        }

        printf("\n");
    }

    return 0;
}
