#include <stdio.h>
#include <stdlib.h>

/*Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
 A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
 A segunda opção imprime “Teste2” e mostra o menu novamente.
 A terceira opção finaliza o programa.
 Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente.*/

int main()
{
    int opc,
    repeticao= 1;

                printf(" ------------------Menu do programa----------------- \n");
                printf("| 1- teste 1                                        | \n");
                printf("| 2- Teste 2                                        |\n");
                printf("| 3- Sair do programa                               | \n");
                printf(" --------------------------------------------------- \n");
                scanf("%d", &opc);

            while (opc < 3)
            {
                switch (opc)
                {
                case 1:
                    printf(" Menu do programa: \n");
                    printf("1- teste 1 \n");
                    printf("2- Teste 2 \n");
                    printf("3- Sair do programa \n");
                    scanf("%d", &opc);

                break;
                case 2:
                    printf(" Menu do programa: \n");
                    printf("1- teste 1 \n");
                    printf("2- Teste 2 \n");
                    printf("3- Sair do programa \n");
                    scanf("%d", &opc);

                break;

                }
            }

    return 0;
}