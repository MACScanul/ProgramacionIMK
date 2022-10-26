#include <stdio.h>

int main()
{
    int i, j, n;
#include <stdio.h>
int main()
{
    char dia;
    int hora, duracion, decision=0;
    float costo, precioxminuto;
while (1)
{
    printf("Para calular el costo de la llamada porfavor precione... 1, si no desea continuar precione culquier otra tecla.\n");
    scanf(" %d",&decision);
    if (decision == 1)
    {
    printf("que dia realizo la llamada?:\nLunes....L\nMartes....L\nMiercoles....X\nJueves....J\nSabado....S\nDomingo....D\n");
    scanf(" %c", &dia);
    if ( dia == 'L' || dia == 'M' || dia == 'X' || dia == 'J' || dia == 'V' || dia == 'S' ||dia == 'D'
        || dia == 'l' || dia == 'm' || dia == 'x' || dia == 'j' || dia == 'v' || dia == 's' ||dia == 'd')
    {
    
    printf("escriba a que hora fue su llamada telefonica.\n");
    scanf(" %d",&hora);
    if (hora < 0 || hora > 2400)
    {
        printf("ERROR esa opcion no es valida \n");
        return (0);
    }else{
    
    printf("Escriba la duración de la llamada en minutos.\n");
    scanf(" %d",&duracion);
    if (dia == 'S' || dia == 's' ||dia == 'D' ||dia == 'd')
    {
     precioxminuto = 0.15;
    }else{
        if (hora < 600 || hora > 2000)
        {
            precioxminuto = 0.60;
        }else{
            precioxminuto = 0.20;
        }
    }
    costo = precioxminuto * duracion;
    printf("el costo total de su llamada es de....\n");
    printf("%f\n", costo);



    }}else{
        printf("ERROR ocpion no valida, reinicie el programa \n");
        return (0);
    }
    }else{
        return 0;
    }   
}
}