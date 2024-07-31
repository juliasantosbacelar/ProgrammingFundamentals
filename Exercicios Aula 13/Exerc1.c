#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*1) Crie um programa para armazenar 10 nomes em um vetor 
e imprimir uma lista numerada*/

int main()
{

char vetorNome[10][16];
int i;

    //repete dez vezes, para os dez nomes serem preenchidos
    for(i=0; i <= 9; i++){
        printf("Digite seu nome: ");
        fgets(vetorNome[i], 21, stdin);
        vetorNome[i][strcspn(vetorNome[i],"\n")]='\0';
        setbuf(stdin, NULL);

    }

    //Exibe a tabela de 10 nomes 
    for(i=0; i < 10; i++){

        printf("%d° Nome: %s \n", i, vetorNome[i]);
    }
 return 0;
}