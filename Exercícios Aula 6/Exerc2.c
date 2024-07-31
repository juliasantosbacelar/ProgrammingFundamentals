#include<stdio.h>
#include<stdlib.h>

/*2) Faça um programa que receba um número e determine 
se ele é um número par ou ímpar.
 Obs.: Utilize o operador % que retorna o resto da divisão)*/

int main () {

int n1;


//Entrada de dados
printf("Vamos verificar se o número é par ou impar\n");
printf("Digite um número: ");
scanf("%lf", &n1);

//se o ao ser divido por 2 o resto dele for iguao a zero:
  if( n1 % 2 == 0){
        printf("O número digitado é par");
       

 }
    //se não for igual a 0, então:
  else {
        printf("O número digitado é impar");
                   
    }


return 0;
}