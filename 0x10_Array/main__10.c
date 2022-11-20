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
    int i, size, pos;


    printf("ingrese el tamaño del arreglo que desea...");
    scanf("%d", &size);
    printf("ingresa los elementos del arreglo...");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }printf("del tamaño de los elementos ingrese que lugar quiere eliminar...");
    scanf("%d", &pos);

    if(pos < 0 || pos > size)
    {
        printf("el lugar del elemento a eliminar no existe... %d", size);
    }
    else
    {for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("\nestos son los elementos restantes despues de la eliminacion de lugares...");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}