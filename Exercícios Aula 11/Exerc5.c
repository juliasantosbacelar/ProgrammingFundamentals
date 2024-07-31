#include <stdio.h>
#include <stdlib.h>

/*5)Dado dois vetores, A (4 elementos) e B (5 elementos), faça 
um programa em C que imprima todos os elementos comuns 
aos dois vetores.*/

int main()
{
    //declaração de variáveis
    int vetorA[4], vetorB[5], cont = 0, i, j;


    for(i = 0; i < 4; i++){
        printf("Digite um número para A:");
        scanf("%i", &vetorA[i]);
    }//for pra rodas tds os valores do vetor A

    for(j = 0; j < 5; j++){
        printf("Digite um número para B:");
        scanf("%i", &vetorB[j]);
    }//for  pra rodas tds os valores do vetor A

    //
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){

            
            if(vetorA[i] == vetorB[j]){
                cont++;
                printf("%i é um número comum \n", vetorA[i]);
            }

        }//for interno roda o vetor B
    }//for externo roda o vetor A 


    return 0;
}
