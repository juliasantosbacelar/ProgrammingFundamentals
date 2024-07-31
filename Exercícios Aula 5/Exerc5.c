#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*5) Sabendo que a função sqrt(valor), que está na biblioteca
math.h retorna a raiz quadrada do valor, calcule a raiz
quadrada de um número que o usuário digitar.*/

int main () {
    double numero;
    double raiz;


    //Receba os dados

    printf("Digite um número:");
    scanf("%lf",&numero);

    //calcula a raiz quadrada
    raiz = sqrt(numero);

    //Exibe o resultado
    printf("A raiz é %.2lf\n", raiz);

    return 0;

}