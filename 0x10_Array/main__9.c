/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[50], position, c, n, value;
    
    printf("ingrese los numero de datos a ingresar...\n");
    scanf("%d", &n);
    
    printf("Ingrese %d datos  \n", n);
    
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);
    
    printf("que valor desea corregir?...\n");
    scanf("%d", &position);
    
    printf("ingrese el valor que sustituira a el seleccionado anteriormente \n");
    scanf("%d", &value);
    
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];
    
    array[position-1] = value;
    
    printf("este es el resultado del arreglo corregido ...\n");
    
    for (c = 0; c <= n; c++)    
        printf("%d\n", array[c]);    
    
    return 0;
}