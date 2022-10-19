/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 
     int i, j, N, columnas;

    
    printf("Input rows:");
    scanf("%d",&N);

    columnas=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columnas; j++)
        {
            printf("*");
        }

        if(i < N)
        {
         
            columnas++;
        }
        else
        {
            
            columnas--;
        }

        
        printf("\n");
    }

    return 0;
}
