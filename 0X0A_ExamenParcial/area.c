#include <stdio.h>
#include <math.h>
#include "main.h"


int area(float volu, float densi, float costA)
{

    float area, radmin, armin, y;
    float gr;
    float pi = 3.1416;
    float cost, cost2 = 2.45;

    radmin = cbrt((2*volu)/(4*pi));  

    armin = (2*pi*(pow(radmin,2)) + 2*pi*radmin*(volu/(pi*pow(radmin,2))));

    y = (volu/(pi*pow(radmin,2)));

    cost = armin * cost2; cost = cost/1000;

    gr = volu * densi; float nuevo = costA - cost;

    
 printf("el radio de la tapa es... %0.2f cm\n", radmin);
  printf("el area total es... %0.2f cm2\n", armin);   
    printf("el costo de fabricacion es de ....  $ %0.2f\n", cost);     
    printf("el costo anterior de la lata de...%0.f ml $ %0.2f\n", volu, costA);
printf("usted ahorro ... $ %0.2f\n", nuevo);
    printf("%0.f ml a gramos es... %0.2f gramos\n",volu,gr);
}