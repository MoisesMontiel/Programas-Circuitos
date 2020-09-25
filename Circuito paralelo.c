#include <stdio.h>

int main()

{
    float Vs;
    int R1,R2,R3,RT;
    float I1,I2,I3;
    float IT;

    printf("Escribe el valor de la fuente Vs: ");
    scanf("%f",&Vs); // recibe valores tecleados

    printf("Escribe el valor de las resistencias separado con comas: ");
    scanf("%d,%d,%d",&R1,&R2,&R3);

    I1=Vs/R1;
    I2=Vs/R2;
    I3=Vs/R3;

    printf("(RECUERDA QUE EL VOLTAJE SIEMPRE ES EL MISMO EN UN CIRCUITO PARALELO)\n");
    printf("La corriente en la resistencia 1 es: %fA\n",I1);
    printf("La corriente en la resistencia 2 es: %fA\n",I2);
    printf("La corriente en la resistencia 3 es: %fA\n",I3);

    IT= I1+I2+I3;

    printf("La corriente total en el circuito es de: %fA\n",IT);


return 0;
}
