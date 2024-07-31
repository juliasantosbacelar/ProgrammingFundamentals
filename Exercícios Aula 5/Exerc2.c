#include<stdio.h>
#include<stdlib.h>

/*2) Faça um programa que calcule e mostre a idade de uma 
pessoa a partir do ano em que a pessoa nasceu e do ano atual. 
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano*/

int main(){

    int anodeNascimento, anoAtual, idade;

    printf("Em que ano você nasceu?\n");
    scanf("%i", &anodeNascimento);

    printf("Em que ano estamos?");
    scanf("%i", &anoAtual);

    idade = anoAtual - anodeNascimento;

    printf("Considerando que você já fez aniversário a sua idade é: %i", idade);
    return 0;
}