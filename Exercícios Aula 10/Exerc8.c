#include<stdio.h>
#include<stdlib.h>

/*8) Utilizando a estrutura do laço for aninhado, crie um
programa que exiba a tabuada de todos os números de
1 a 10 no seguinte formato:*/

int main(){

    int numResultado;
     for ( int i = 1 ; i < 11 ; i++){
         printf("---------------- Tabuada do %d ---------------- \n", i);
        for ( int num = 1 ; num < 11 ; num++){

            numResultado = num * i;
    
            printf("\n%i x %i = %d\n",i, num, numResultado);
            printf("\n");
        }//for interno calcula a tabuada 
     }//for externo serve como um contador para calcular a tabuada
    return 0;
}