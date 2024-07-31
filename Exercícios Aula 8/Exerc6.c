#include<stdio.h>
#include<stdlib.h>

/*5) Faça um programa que receba um número real, calcule e 
exiba o quadrado dele. O programa deverá repetir esse 
procedimento para 10 números, um de cada vez*/
int main () {
    
    int i = 0, resultado, num;

    

    while(i >= 0){
        printf("Digite um número positivo para continuarmos:");
        scanf("%d", &num);
        resultado = pow(num, 2);
        
        printf("Resultado = %d \n", resultado);
            
            while(num <= 0){
                 printf("Programa finalizado!");
            }

    }
    

    return 0;
}