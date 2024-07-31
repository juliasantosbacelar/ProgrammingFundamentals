#include <stdio.h>
#include <stdlib.h>


/*6) Faça um programa que receba e armazene 20 números em 
um vetor. Em seguida exiba:
 Quantos números são iguais a 30;
 Quantos números são maior que a média;
 Quantos números são iguais à media*/


int main()
{
    //declaração de variáveis
    float vetor[20], soma = 0, media;
    int cont1 = 0, cont2 = 0, cont3 = 0, i;
    
    //recolhe os números
    for(i = 0; i < 20; i++){
        printf("Digite um número:");
        scanf("%f", &vetor[i]);

        //acumula os números inseridos
        soma = soma + vetor[i];
    }//for


    for(i = 0; i < 20; i++){
        if(vetor[i] == 30){
            cont1++;//contador dos números iguais a 30
        }//if

        media = soma / 20;
        if(vetor[i] > media){
            cont2++;//contador dos números maiores que a média
        }//if

        if(vetor[i] == media){
            cont3++;//contador dos números iguais a média
        }//if
    }//for

    //no caso do contador ser 0 ou 1
    if(cont1 == 1){
        printf("1 número é igual a 30\n");
    }else{
        if(cont1 == 0){
            printf("Nenhum número é igual a 30\n");
        }else{//no caso do contador ser maior que 1
            printf("%i números são iguais a 30\n", cont1);
        }//else interno
    }//else externo

    //no caso do contador ser 0 ou 1
    if(cont2 == 1){
        printf("1 número é maior que a média\n");
    }else{
        if(cont2 == 0){
            printf("Nenhum número é maior que a média\n");
        }else{//no caso do contador ser maior que 1
            printf("%i números são maiores que a média\n", cont2);
        }//else interno
    }//else externo

    //no caso do contador ser 0 ou 1
    if(cont3 == 1){
        printf("1 número é igual a média\n");
    }else{
        if(cont3 == 0){
            printf("Nenhum número é igual a média\n");
        }else{//no caso do contador ser maior que 1
            printf("%i números são iguais a média\n", cont3);
        }//else interno
    }//else externo

    return 0;
}