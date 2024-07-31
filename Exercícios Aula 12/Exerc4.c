#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*4) Faça um programa que multiplique por 5 a
matriz A (preenchida a partir do teclado) para gerar a
matriz C.*/

int main()
{
    //valores de linhas e colunas
    int qntLinha,
        qntColuna;
    printf("Digite o numero de linhas e colunas respectivamente(Ex. 3,3):\n");
    scanf("%d,%d", &qntLinha, &qntColuna);

    //matrizes
    int matrizA[qntLinha][qntColuna],
        matrizC[qntLinha][qntColuna];

    //recebendo a matriz A
        for (int i = 0; i < qntLinha; i++)
        {
            for (int j = 0; j < qntColuna; j++)
            {
                printf("Digite o valor %d,%d da matriz A:\n", i+1, j+1);
                scanf("%d", &matrizA[i][j]);
            }//for2
        }//for1

    //calculando a matriz C
        for (int i = 0; i < qntLinha; i++)
        {
            printf("| ");
            for (int j = 0; j < qntColuna; j++)
            {
                matrizC[i][j] = matrizA[i][j]*5;
                printf("%3d ", matrizC[i][j]);
            }//for2
            printf("|\n");
        }//for1
    return 0;
}//main