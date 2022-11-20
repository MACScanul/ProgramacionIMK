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
    int i, size, count = 0;

    printf("ingresa el numero de datos a ingresar...");
    scanf("%d", &size);

    printf("porfavor ingrese los datos...");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    } for(i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }

    printf("\neste es el total de datos negativos...%d", count);

    return 0;
}