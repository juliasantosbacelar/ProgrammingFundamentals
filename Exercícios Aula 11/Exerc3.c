#include<stdio.h>
#include<stdlib.h>

/*3) Leia um vetor A com 10 elementos inteiros correspondentes 
as idades de um grupo de pessoas. Escreva um programa que 
conte e exiba a quantidade de pessoas que possuem idade 
superior a 35 anos.*/

int main(){

    int idade[10], idadeMaior[10], i, j;


    for(i = 0; i <= 10; i++){
    
        printf("Digite a idade do seu grupo de amigos: ");
        scanf("%d", &idade[i]);

        idadeMaior[i] = idade[i];   // idadeMaior a variavel de armazenamento

    } // primeiro for para guardar os valores das idades 

    printf("--------------------------------------------------------------");

    for(i=0; i <= 10; i++){
            
        if(idadeMaior[i] > 35){
           printf("As idades digitadas maiores que 35 foram: %d \n", idadeMaior[i]);
        }// if, se os valores digitados forem maior que 35, exibe.

    } //for dois para rodar as 10 idades guardadas  

    return 0;
}