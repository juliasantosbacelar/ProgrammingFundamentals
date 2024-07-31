#include<stdio.h>
#include<stdlib.h>

/*2) Crie um algoritmo que receba 10 números e os armazene em 
um vetor A. Em seguida, gere o vetor B onde cada elemento é o 
quadrado do valor da mesma posição no vetor A */

int main(){
    
    int A[10], B[10], resultado[10], i;
 
        printf("\n ------------ Primeiro vetor------------ \n");

        for(i = 0; i < 10; i++){
            printf("Informe a %d nota: ", i);
            scanf("%d", &A[i]);
        }//for

         printf("\n ------------ Segundo vetor------------ \n");
        //fazer com o vetor B agora

        for(i = 0; i < 10; i++){
            printf("Informe a %d nota: ", i);
            scanf("%d", &B[i]);
        }//for


        printf("\n Os vetores multiplicados são: \n");
        for(i = 0; i < 10; i++){

            resultado[i]  = A[i] * B[i];

            printf("Nota[%d]: %d\n", i, resultado[i]);
        }//for


    return 0;
}