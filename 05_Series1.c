#include <stdio.h>


int main()
{
    int cont=0;
    int n;

    printf("Escribe el valor de n: ");
    scanf("%d",&cont);

    while(cont>=0)
    {
        printf("\n%d ",cont);
        cont=cont-1;
    }



    printf("\nFin del ciclo");



 return 0;
}
