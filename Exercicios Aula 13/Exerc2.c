#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*2) Faça um programa que armazene o nome e salário de 5 
empregados. Em seguida calcule um aumento de 8% nos 
salários e exiba a nova folha de pagamentos.*/

int main()
{

char vetorNome[5][16];
float vetorSalario[5], vetorSalarioNovo[5], vetorAumento[5];
int i;

    //for que repete a solicitação dos 5 empregados;
    for(i=0; i <= 4; i++){

        printf("\nDigite seu nome: ");//solicitando o nome;
        fgets(vetorNome[i], 15, stdin);
        vetorNome[i][strcspn(vetorNome[i],"\n")]='\0';
        setbuf(stdin, NULL);

        printf("\nDigite seu salário:"); //solicitando o salário;
        scanf("%f", &vetorSalario[i]);
        setbuf(stdin, NULL);
    }

    printf("------------------------------------------------\n");
    printf("| Nome                       |Salário          |\n");


    for(int i = 0; i < 5; i++){

        vetorAumento[i]= (vetorSalario[i] * 0.08);
        vetorSalarioNovo[i] = vetorAumento[i] + vetorSalario[i];
        printf("|%s                       | R$ %.4f          | \n", vetorNome[i], vetorSalarioNovo[i]);
    }
  
 return 0;
}