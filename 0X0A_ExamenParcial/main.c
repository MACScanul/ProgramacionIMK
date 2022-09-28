#include <stdio.h>
#include <math.h>
#include "main.h"

int main()
{

    float vol, densi, cost;
    char opcion;

    printf("que producto desea escojer?\n");
    printf("a...aceite\n");
    printf("b...alcohol\n");
    printf("c... gasolina\n");
    printf("d...acetona\n");
    scanf("%c", &opcion);

    printf("cual es el volumen?...\n");
    scanf("%f", &vol);

    if (vol == 500)
    {
        cost = 1.006;
    }
    else if (vol == 1000)
    {
        cost = 1.6816;
    }
    else if (vol == 1500)
    {
        cost = 1.9610;
    }
    else{
        cost = 3.1038;
    }
    
    ////////////////////

    switch(opcion)
    {
        case 'a': 
        densi = 0.9; area(vol, densi, cost);
        
        break;
        
        case 'b': 
        densi = 0.8;area(vol, densi, cost);
        break;
       
        case 'c': 
        densi = 0.68; area(vol, densi, cost);
        break;
        
        
        case 'd': 
        densi = 0.79; area(vol, densi, cost);
        
       break;
        
        default:
        printf("usted selecciono un prducto inexistente..\n");
        break;
        
    }
    

}