#include<stdio.h>
#include<stdlib.h>

/*4) Crie um algoritmo que exiba todos os números pares 
entre 240 e 730 inclusive.*/
int main () {
    int i = 0 ;
    
    printf("Veja todos os números pares entre 240 a 730 serem exibidos: \n");

    while(i <= 729){
        i += 2;
        printf("\n%d", i);
    }
    return 0;

}