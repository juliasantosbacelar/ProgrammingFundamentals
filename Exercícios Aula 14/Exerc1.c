#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1)Faça um algoritmo que implemente uma função que receba 3 números
inteiros e retorne o maior valor*/

void testeNumero()
{
    double numero[3],
        maiorValor = 0;

        //recebendo os numeros
        for (int i = 0; i < 3; i++)
        {
            printf("\nDigite o número %i:\n", i+1);
            scanf("%lf", &numero[i]);
            setbuf(stdin,NULL);
        }
        //verificando o maior número
        for (int i = 0; i < 3; i++)
        {
            if (numero[i] > maiorValor)
            {
                maiorValor = numero[i];
            }//if interno
        }//for externo
        
            printf("\nMaior número: %.2lf\n", maiorValor);
    return;
}//fim do TesteNumero

            int main(int argc, char const *argv[])
            {
                printf("Primeira versao de funçoes:\n");
                testeNumero();
                return 0;
            }//Fim main