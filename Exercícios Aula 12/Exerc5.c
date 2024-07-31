#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*Faça um programa que some as matrizes A e B,
gerando C*/

int main()
{
    //tamanho colunas e linhas
        int qntLinha,
            qntColuna;
            printf("Digite o numero de linhas e colunas respectivamente(Ex. 3,3):\n");
            scanf("%d,%d", &qntLinha, &qntColuna);

            //matrizes
            int matrizA[qntLinha][qntColuna],
                matrizB[qntLinha][qntColuna],
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

            //recebendo a matriz B
            for (int i = 0; i < qntLinha; i++)
            {
                for (int j = 0; j < qntColuna; j++)
                {
                    printf("Digite o valor %d,%d da matriz B:\n", i+1, j+1);
                    scanf("%d", &matrizB[i][j]);
                }//for2
            }//for1

            //soma das matrizes
            for (int i = 0; i < qntLinha; i++)
            {
                printf("| ");
                for (int j = 0; j < qntColuna; j++)
                {
                    matrizC[i][j]= matrizA[i][j] + matrizB[i][j];
                    printf("%4d ", matrizC[i][j]);
                }
                printf("|\n");
            }
    return 0;
}//main