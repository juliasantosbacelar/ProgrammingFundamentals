#include<stdio.h>
#include<stdlib.h>

/*4) Tendo a Altura da pessoa definida como uma constante, 
calcule seu peso ideal utilizando a seguinte fórmula:
 peso ideal = 72.7 x altura – 58*/

int main(){

    double altura, pesoIdeal;
    
    printf(" Qual é a sua altura? \n");
    fflush(stdin);
    scanf("%lf", &altura);

    pesoIdeal = 72.7 * altura - 58;

    printf("\nSeu peso ideal é %.2lf kg", pesoIdeal);
    return 0;

}