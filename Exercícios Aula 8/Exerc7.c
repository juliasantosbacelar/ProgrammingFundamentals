#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que calcule o fatorial de um número a ser
digitado.*/

int main() {

    int numero, 
        fatorial = 1, 
        repeticoes = 1;

        printf("Digite um numero para saber seu resultado fatorial: ");
        scanf("%d", &numero);

    while (repeticoes <= numero) 
    {
        fatorial *= repeticoes;
        repeticoes++;
    }

        printf("%d! = %d\n", numero, fatorial);

    return 0;
}