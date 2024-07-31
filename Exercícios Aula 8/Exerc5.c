#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*5) Faça um programa que receba um número real, calcule e 
exiba o quadrado dele. O programa deverá repetir esse 
procedimento para 10 números, um de cada vez*/
int main () {
    int i = 0, resultado, num;

    while(i <= 9){
        printf("Digite um número para calcularmos: \n");
        scanf("%d", &num);

        resultado = pow(num, 2);
        
        printf("Resultado = %d \n", resultado);
        i += 1;
    }
    return 0;


}