#include <stdio.h>
#include <stdlib.h>

/*Altere o exercício anterior para receber os 3 valores no
mesmo scanf.*/

int main()
{
    char operacao;
    double numero1,
            numero2,
            resultado;

            printf("Digite o calculo a ser feito '+', '-', '', '/':(sem espaços)");

            scanf("%lf%c%lf", &numero1, &operacao, &numero2);
            setbuf(stdin,NULL);

            switch (operacao)
            {
            case '':
                resultado= numero1 * numero2;
                    printf("Produto: %.2lf\n", resultado);

            break;
            case '/':
                resultado= numero1 / numero2;
                    printf("Divisão: %.2lf\n", resultado);

            break;
            case '-':
                resultado= numero1 - numero2;
                    printf("Subtração: %.2lf\n", resultado);

            break;
            case '+':
                resultado= numero1 + numero2;
                    printf("Soma: %.2lf\n", resultado);
            default:
                    printf("\nFavor digitar uma das opções dadas\n Obrigado <3\n");

            break;
            }
    return 0;
}