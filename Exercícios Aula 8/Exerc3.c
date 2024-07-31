#include<stdio.h>
#include<stdlib.h>

/*3) Crie um algoritmo que exiba todos os números múltiplos 
de 3 no intervalo de 1 a 322.*/
int main () {
    int i = 0 ;
    
    printf("Veja os números múltiplos de 3  entre 1 a 322 serem exibidos: \n");

    while(i <= 320){
        i += 3;
        printf("\n%d", i);
    }
    return 0;
}

