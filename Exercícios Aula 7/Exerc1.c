#include<stdio.h>
#include<stdlib.h>

/*1) Crie um programa que forneça um menu com duas 
opções. Caso o usuário digite 1, o programa solicitará um 
número e verificará se o valor é par ou impar. Caso o 
usuário digite 2, o programa solicitará uma idade e 
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:*/

int main(){

    int opc, resto, n1, anodeNascimento, anoAtual, idade;

    printf("Escolha uma das opções:\n");
    printf("1 - Verificar par/impar \n");
    printf("2 - Verificar maior/menor de idade\n");
    printf("Digite a opção:");
    scanf("%d", &opc);

    switch (opc) 
    {
    case 1:
       
        //verificar se o número é par ou impar 
                printf("Vamos verificar se o número é par ou impar\n");
                printf("Digite o número desejado:");
                scanf("%d", &n1);

                

                //se o ao ser divido por 2 o resto dele for iguao a zero:
                if( n1 % 2 == 0){
                printf("\n ----------O número digitado é par----------");
           

                }
                //se não for igual a 0, então:
                else {
                    printf("\n----------O número digitado é impar----------");
                  

                }

        break;

    case 2:
        
        //verificar se a pessoa é maior ou menor de idade
        //contando que ela já fez aniversário
                printf("\n");
                printf("-----------------------------------------------------------------\n");
                printf("|                    Vamos calcular a sua idade?                 |\n");
                printf("|----------------------------------------------------------------|\n");
                printf("\n");
                printf("|  Em que ano você nasceu? ");
                scanf("%i", &anodeNascimento);
                printf("|----------------------------------------------------------------|\n");

                printf("\n");
                printf("|  Em que ano estamos? ");
                scanf("%i", &anoAtual);
                printf("|----------------------------------------------------------------|\n");

                idade = anoAtual - anodeNascimento;

                printf("\n");
                printf("| Considerando que você já fez aniversário, você tem: %i anos|\n", idade);
                printf("|----------------------------------------------------------------|\n");
                return 0;


        break;

    default:
            printf("Por favor, Escolha uma opção válida");
        break;
    }
}