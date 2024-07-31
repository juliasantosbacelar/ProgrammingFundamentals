#include<stdio.h>
#include<stdlib.h>

/*2) Faça um algoritmo que exiba todos números de 100 a 1.*/
int main () {
     int i = 101 ;
    
    printf("Veja os números de 100 a 1 serem exibidos: \n");

    while (i >= 1) {
        i--;
        printf("=> %d\n", i);
    }
    return 0;

}