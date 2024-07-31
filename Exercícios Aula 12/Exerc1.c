#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*Crie uma matriz identidade com dimensões 5 x 5;*/

int main()
{
    int matriz[5][5];

    for (int ln = 0; ln <= 4; ln++)
    {
         printf("|");
        for (int cn = 0; cn <= 4; cn++)
        {
            if (ln == cn)
            {
                matriz[ln][cn]= 1;
            }else
            {
                matriz[ln][cn]= 0;
            }//else
            printf(" %d", matriz[ln][cn]);
         }//for
         printf("|\n");
    }//for
return 0;
}

