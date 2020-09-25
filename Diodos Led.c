#include <stdio.h>

int main()

{
    float V;
    float Ro,Ve,Az,Bl;//Rojo 2v - 0.02A//Verde 3v - 0.02//Azul 3v - 0.02//Blanco 2.8v - 0.02
    float R;

    printf("Escribe el valor de la fuente V: ");
    scanf("%f",&V); // recibe valores tecleados

    Ro=(V-2)/0.02;
    Ve=(V-3)/0.02;
    Az=(V-3)/0.02;
    Bl=(V-2.8)/0.02;



    printf("La resistencia para el color Rojo es: %.2fOhm's\n",Ro);
    printf("La resistencia para el color Verde es: %.2fOhm's\n",Ve);
    printf("La resistencia para el color Azul es: %.2fOhm's\n",Az);
    printf("La resistencia para el color Blanco es: %.2fOhm's\n",Bl);

return 0;
}
