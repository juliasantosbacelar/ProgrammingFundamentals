#include<stdio.h>
#include<stdlib.h>

/*4) Crie um algoritmo que exiba todos os números pares 
entre 240 e 730 inclusive*0*/
int main(){
    int i, num;

    for(num = 240; num <= 731; num++){

        i = num % 2;
            if(i==0){
               printf("%d \n", num);
            }

    } // for exibe os números solicitador

    return 0;
}