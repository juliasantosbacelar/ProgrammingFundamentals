#include<stdio.h>
#include<stdio.h>
#include<string.h>

/*3)Desenvolva um programa que armazene o nome e o 
telefone de 5 pessoas. Ao digitar a posição desejada, o 
programa deve exibir o nome e telefone daquela posição. O 
programa finaliza ao receber a entrada -1*/

int main(){

    char vetorTelefone[5][20], vetorNome[5][21];
    int i, posicao;


    for(i = 1; i < 5; i++){

        //Armazenando o nome:
        printf("Digite o %d° nome: ", i);
            fgets(vetorNome[i], 20, stdin);
                vetorNome[i][strcspn(vetorNome[i],"\n")]='\0';
                    setbuf(stdin, NULL);

        //Armazenando o telefone:
        printf("Digite o %d° telefone:", i);
            fgets(vetorTelefone[i], 20,stdin);
                 vetorTelefone[i][strcspn(vetorTelefone[i],"\n")]='\0';
                    setbuf(stdin, NULL);
                        printf("\n");

    }//for

    //pesquisa a posição:
    do{// fazer enquanto posição for diferente de -1

    //solicita a posição desejada 
        printf("Digite a posição desejada: ");
            scanf("%d", &posicao);
                setbuf(stdin, NULL);

                //averigua a posição
                if(posicao >= 0 && posicao <5){
                    printf("%-15s - %-20s\n", vetorNome[posicao], vetorTelefone[posicao]);

                } if (posicao == -1){
                    printf("Fim de programa\n");
                } else {
                    printf("Posição invalida\n");
                }

    } while(posicao != -1);
                

    return 0;
}