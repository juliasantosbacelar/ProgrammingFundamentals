#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*5) Faça um programa que receba uma frase e depois exiba quantas vezes 
cada vogal aparece. Ele deve contar considerando o tamanho da String.*/

int main(){

    char vetorFrase[31], vetorVogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int tamanho, cont[5] = { 0, 0, 0, 0, 0};
    
    //solicitando a frase 
    printf("Digite a frase:");
        fgets(vetorFrase,30, stdin);
            vetorFrase[strcspn(vetorFrase,"\n")]='0';
                setbuf(stdin, NULL);

                    tamanho = strlen(vetorFrase);//o valor de vetor frase sendo tranferido para a variavel tamanho

    // for onde é feita  a comparação de frases e vogais
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < 5; j++){
            if(tolower(vetorFrase[i]) == vetorVogais[j]){
                cont[j]++;
            }
        }
    }

        //for de exibição de todos os contadores
        for(int j= 0;j < 5; j++){
            printf("Existem %d letras %s\n", cont[j], vetorVogais[j]);
        }
    return 0;
}