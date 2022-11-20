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
    int i, max, min, size;

    printf("ingrese el numero de datos a ingresar...");
    scanf("%d", &size);

    printf("introduzca los datos");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    } max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++)
    {
       
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
   }
    printf("estos son los datos maximos... %d\n", max);
    printf("estos son los datos minimos... %d", min);
    return 0;
}