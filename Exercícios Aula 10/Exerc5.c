#include<stdio.h>
#include<stdlib.h>

/*5) Faça um programa que calcule o fatorial de um número a ser 
digitado*/

int main(){
    
    int num, fatorial;

    printf("Digite um numero para saber seu resultado fatorial: ");
        scanf("%d", &num);

        for(fatorial = 1; num > 1; num = num - 1){
            
            fatorial = fatorial * num;
        } // for  faz a conta dos fatoriais 

    printf("%d! = %d\n", num, fatorial);

    return 0;
}

