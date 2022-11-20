/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <limits.h> 
#define MAX_SIZE 1000    

int main()
{
    int arr[MAX_SIZE], size, i;
    int max1, max2;

    printf("ingrese el numero de datos que desea ingresar, ");
     printf("mayor que 0 pero menor que 1000 datos");
    scanf("%d", &size);
     
    printf("introduzca los datos ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }max1 = max2 = INT_MIN;

    for(i=0; i<size; i++)
    {if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
           
            max2 = arr[i];
        }
    }
    printf("el dato mas largo es... %d\n", max1);
    printf("el segundo dato mas largo es... %d\n", max2);

    return 0;
}