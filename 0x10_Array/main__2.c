/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE]; 
    int i, N;


    printf("ingrese el numero de datos que va ingresar... ");
    scanf("%d", &N);
    printf("ingrese los datos... ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nlos datos negativos son.... ");
    for(i=0; i<N; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}