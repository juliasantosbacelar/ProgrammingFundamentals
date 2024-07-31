#include<stdio.h>
#include<stdlib.h>

/*3) Crie um algoritmo que exiba todos os números múltiplos 
de 5 no intervalo de 1 a 500.*/

int main(){

    int v;
    for(int i = 0; i <= 100; i++){

        v = 5 * i ;
        printf("V = 5 * %d = %d \n", i, v);
    }//entra no for se i for entre 0 e 100;

    return 0;
}