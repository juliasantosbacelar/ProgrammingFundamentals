#include<stdio.h>
#include<stdlib.h>

/*1) Faça um programa que receba a altura de uma pessoa e 
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura – 58*/

int main(){

    double altura, pesoIdeal;
    
    printf(" Qual é a sua altura? \n");
    scanf("%lf", &altura);

    pesoIdeal = 72.7 * altura - 58;

    printf("\nSeu peso ideal é %.2lf kg", pesoIdeal);
    return 0;

}