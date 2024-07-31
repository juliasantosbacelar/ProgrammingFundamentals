#include<stdio.h>
#include<stdio.h>
#include<string.h>

/*4) Faça um programa que receba um nome, ele deve perguntar 
novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber 
um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.*/

int main(){

    char vetorNome[31];
    int tamanho;

    //solicitando o nome
    printf("Digite o seu nome:");
        fgets(vetorNome, 30, stdin);
            vetorNome[strcspn(vetorNome,"\n")]='\0';
                setbuf(stdin, NULL);

                    tamanho = strlen(vetorNome);//valor de vetor Nome sendo tranferido para a variavel tamanho

    //enquanto tamanho for menor que 5, da erro e repete o processo de cima
    while(tamanho < 5){ 
        printf("ERRO!\n");
        printf("Digite um nome com 5 ou mais caracteres\n");
        printf("Digite novamente seu nome:");
        fgets(vetorNome, 30, stdin);
            vetorNome[strcspn(vetorNome,"\n")]='\0';
                setbuf(stdin, NULL);

            tamanho = strlen(vetorNome);
    } 

    //Exibe após o usuário digitar corretamente
    printf("Agora está correto!\n");
    printf("Nome:  %s", vetorNome);    
    
    return 0;
}