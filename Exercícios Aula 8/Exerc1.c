#include<stdio.h>
#include<stdlib.h>

/*1) Faça um algoritmo que exiba todos números de 1 a 100.*/

int main () {

    int i = 0 ;
    
    printf("Veja os números de 1 a 100 serem exibidos: \n");

    while (i <= 99) {
        i++;
        printf("=> %d\n", i);
    }
    return 0;

}