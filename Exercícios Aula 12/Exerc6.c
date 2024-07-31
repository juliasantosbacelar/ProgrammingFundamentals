#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*6)Faça um programa que multiplique as matrizes A e D
abaixo gerando matriz AD*/

int main()
{
    //variaveis matrizeslinhas/colunas
    int matrizA[2][3],
        matrizD[3][2],
        matrizAD[2][2];
    
    int l = 2,
        c = 3;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                    printf("Digite os numeros da matriz A:\n");
                    scanf("%d", &matrizA[i][j]);
            }//for interno
        }//for externo
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < l; j++)
            {
                printf("Digite os numeros da matriz D:\n");
                scanf("%d", &matrizD[i][j]);
            }//for interno
        }//for externo

        //calculando a matriz AD
        for (int i = 0; i < 2; i++)
        {
            printf("|");
            for (int j = 0; j < 2; j++)
            {
                matrizAD[i][j]= matrizA[i][0] * matrizD[0][j] + matrizA[i][1] * matrizD[1][j] + matrizA[i][2] * matrizD[2][j];

                printf("%d ",matrizAD[i][j]); 

            }//for interno
            printf("|\n");
        }//for externo

    return 0;
}//main