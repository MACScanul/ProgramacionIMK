/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//lo admito este fue realmente dificil jajajaja 
#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;

       printf("ingrese el numero de datos que se almezenaran en la matriz...");
       scanf("%d",&n);
   
       printf("introduzca %d datos que iran en la matriz\n",n);
       for(i=0;i<n;i++)
        {
	      printf("datos totales...%d  ",i);
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }
printf("\nlos datos almazenados en la primera matriz son...\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr1[i]);
    }
printf("\n\nlos datos copiados de la 2da matriz son...\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");
}