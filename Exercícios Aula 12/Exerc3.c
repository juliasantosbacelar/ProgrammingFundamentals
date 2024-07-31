#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*3)Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva: O valor e a localização (linha, coluna) do maior valor encontrado
na matriz.*/

int main()
{
    //variaveis
    int matriz[5][5],
        MVN = 0,
        lnMaiorV,
        cnMaiorV;

    //recolher os valores da matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite os valores da matriz, começando por %i e %i:", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }//for2

    }//for1

    //print matriz
        for (int i = 0; i < 5; i++)
        {
            printf("| ");
            for (int j = 0; j < 5; j++)
            {
                printf("%4i ", matriz[i][j]);
            }//for2

            printf(" |\n");
        }//for1

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (matriz[i][j] > MVN)
                {
                    MVN = matriz[i][j];
                    lnMaiorV = i+1;
                    cnMaiorV = j+1;
                }//if

            }//for2

        }//for1

        //exibindo os valores
        printf("Maior valor da matriz = %d \n", MVN);
        printf("Linha e coluna do maior valor = %d e %d", lnMaiorV, cnMaiorV);

return 0;
}//main
