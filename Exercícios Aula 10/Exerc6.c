#include<stdio.h>
#include<stdlib.h>

/*6) Faça um programa que receba 10 números e calcule o
quadrado desse número (um de cada vez).*/

int main(){

    int i, num, numQuadrado;

        for(i = 1; i <= 10; i++){

            printf("\nDigite o número para calcularmos o quadrado dele: ");
            scanf("%d", &num);

            numQuadrado = num * num;
            printf("\nO quadrado do %d° número é %d\n", i, numQuadrado);
            

        } //for calcula o quadrado dos números um de cada vez
    return 0;
}
