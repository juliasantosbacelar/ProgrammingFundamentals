#include<stdio.h>
#include<stdlib.h>

/* Faça um programa com 2 variáveis, A e B,|
 onde A terá o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B, 
AxB e A/B. Em seguida, faça B incrementar de uma 
unidade e repita as 4 operações.*/

int main() {

    double A, B;
    double soma, subtracao, multiplicacao, divisao;

    A = 40;
    B = -1;

    soma = A + B;
    printf("A soma de A e B é: %.2lf \n", soma);

    subtracao = A - B;
    printf("A subtração é igual à: %.2lf \n", subtracao);

    multiplicacao = A * B;
    printf("A e B multiplicados é igual à: %.2lf \n", multiplicacao);

    divisao = A / B;
    printf("A e B divididos é igual à: %.2lf \n", divisao);

    B++; 
    
    double s, s2, m, d;

    soma = A + B;
    printf("A soma de A e B é: %.2lf \n", s);

    subtracao = A - B;
    printf("A subtração é igual à: %.2lf \n", s2);

    multiplicacao = A * B;
    printf("A e B multiplicados é igual à: %.2lf \n", m);

    divisao = A / B;
    printf("A e B divididos é igual à: %.2lf \n", d);


    return 0;
}