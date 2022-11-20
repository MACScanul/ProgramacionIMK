/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>

int main()
{

    int arr[100], size, i, sum = 0;
    
    printf("ingrese el numero de datos a ingresar...\n");
    scanf("%d",&size);
    
    printf("ingrese los datos...\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    
    //print the result
    printf("la suma de los datos es...%d\n",sum);
    
    return 0;
}