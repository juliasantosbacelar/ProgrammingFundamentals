#include<stdio.h>
#include<stdlib.h>

/*1) Faça um programa que leia e armazene dois vetores de 
tamanho 5. Ao final o programa deve calcular e exibir o vetor 
soma*/

int main(){

    int valor1 [5], valor2 [5], resultado[5], i;
  
        for(i = 0; i < 5; i++){
            printf("Informe a %d nota: ", i);
            scanf("%d", &valor1[i]);
        }//for

         printf("\n ------------Segundo vetor------------ \n");
        //fazer com o vetor 2 agora

        for(i = 0; i < 5; i++){
            printf("Informe a %d nota: ", i);
            scanf("%d", &valor2[i]);
        }//for


        printf("\n As a soma dos vetores são: \n");
        for(i = 0; i < 5; i++){

            resultado[i]  = valor1 [i] + valor2[i];

            printf("Nota[%d]: %d\n", i, resultado[i]);
        }//for

    return 0;
}