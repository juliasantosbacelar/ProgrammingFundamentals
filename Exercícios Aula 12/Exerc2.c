#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária;*/

int main()
{
    int matriz[3][3],
        somaDig1= 0,
        somaDig2= 0;

    for (int ln = 0; ln < 3; ln++)
    {
        for (int cn = 0; cn < 3; cn++)
        {
            printf("Digite os valores da matriz:");
            scanf("%d", &matriz[ln][cn]);
        }

    }//for
    for (int ln = 0; ln < 3; ln++)
    {
        printf("|");
        for (int cn = 0; cn < 3; cn++)
        {
           printf("%4d ",matriz[ln][cn]);
        }
        printf("|\n");
    }//for
    for (int ln = 0; ln < 3; ln++)
    {
        for (int cn = 0; cn < 3; cn++){
            if(ln == cn){
                somaDig1 += matriz[ln][cn];

            }

        }//for
    }
    for (int ln = 0; ln < 3; ln++)
    {
        for (int cn = 0; cn < 3; cn++){
            if(ln + cn == 3){
                somaDig2 += matriz[ln][cn];

            }//if
        }//for2
    }//for1
    printf("\nA soma da matriz principal: %d\n", somaDig2);
    printf("\nA soma da matriz secundaria: %d\n", somaDig1);
return 0;
}//main