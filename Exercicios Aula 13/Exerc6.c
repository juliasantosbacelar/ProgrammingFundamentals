#include<stdio.h>
#include<stdio.h>
#include <string.h>

/*6) Faça um programa que receba um nome e um sobrenome. Ele deve 
construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José.*/

int main(){

    char vetorNome[31], vetorSobrenome[31], vetorArmazem[63], vetorSeparar[3]= ", ";

    //solicitando os nomes:

    printf("Digite o seu nome:");
    fgets(vetorNome,30,stdin);
    vetorNome[strcspn(vetorNome,"\n")] = '\0';
    setbuf(stdin, NULL);

    //solicitando os sobrenomes
    printf("Digite o seu sobrenome:");
    fgets(vetorSobrenome,30,stdin);
    vetorSobrenome[strcspn(vetorSobrenome,"\n")] = '\0';
    setbuf(stdin, NULL);

    //parte do programa que troca para nome americano em um úncia string
    strcpy(vetorArmazem,vetorSobrenome);
    strcat(vetorArmazem,vetorSeparar);
    strcat(vetorArmazem,vetorNome);

    //exibe o nome americano
    printf("Nome Americano: %s \n", vetorArmazem);
    
    return 0;
}