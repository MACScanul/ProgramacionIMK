/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int a;  
       
  
    printf("introduzca los elementos que desea replicar\n");  
     printf("se le solicitaran 10 elementos\n"); 
    for(a=0; a<10; a++)  
    {  
	    printf("elementos - %d : ",a);
        scanf("%d", &arr[a]);  
    }  
  
    printf("\nlos elementos del array son....");  
    for(a=0; a<10; a++)  
    {  
        printf("%d  ", arr[a]);  
    } 
    printf("\n");	
}