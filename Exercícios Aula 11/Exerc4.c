#include<stdio.h>
#include<stdlib.h>

/*4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a 
soma dos seus elementos, e apresente o resultado.*/

int main(){

    int vetor[8] = { 0, 1, 2, 3, 4, 5, 6, 7}/*valores do vetor inicalizado*/, 
    vetorResultante, i;

    for(i = 0; i <= 7; i++){

        vetorResultante = vetor[i] + vetor[i];
        printf("A soma dos números do vetor são: %d\n", vetorResultante);
    }//for faz com que rode os 8 valores inicie e rode, assim, soma os valores.

    return 0;
}