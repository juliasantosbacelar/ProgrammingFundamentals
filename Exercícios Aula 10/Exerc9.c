#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

/*9) Desenvolva um programa que receba um numero
tamanho e exiba um quadrado de tamanho tamanho
utilizando o carácter */

int main() {
    int tamanho, x, y;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    printf("Quadrado de tamanho %d:\n", tamanho);

    for (x = 0; x < tamanho; x++) {
        for (y = 0; y < tamanho; y++) {
            printf("# ");
        }
        printf("\n");
    }//for calcula a quantidade dos #

    return 0;
}