#include<stdio.h>
#include<stdlib.h>

/*1) Faça um programa que calcule a média para 5 alunos, sendo que 
cada aluno tem 2 notas (reais). O programa somente deverá aceitar 
notas no intervalo fechado de 0 a 10, solicitando nova digitação 
quando necessário*/

int main(){

    int i = 0, nota1 = 0, nota2 = 0;

    do{
        printf("Digite a sua primeira nota: ");
        scanf("%d", &nota1);
        printf("Digite a sua segunda nota: ");
        scanf("%d", &nota2);

        if( nota1 >= 0 || nota1 <= 10){
            printf("\n");
            printf("Entrou no if, nota 1\n");

            i++;
        } 
        
        if(nota2 >= 0 || nota2 <= 10){
            printf("\n");
            printf("Entrou no if, nota 2\n");

        }

        if(nota1 <= 0 || nota1 > 10 ) {
            printf("\n");
            printf("-----------------------------------------\n");
            printf("| Nota P1 inválida                      |\n");
            printf("| Somente será aceita notas entre 0 e 10|\n");
            printf("----------------------------------------\n");
            printf("\n");

        } 

        if(nota2 <=0 || nota2 > 10 ) {
            printf("\n");
            printf("-----------------------------------------\n");
            printf("| Nota P2 inválida                       |\n");
            printf("| Somente será aceita notas entre 0 e 10 |\n");
            printf("---------------------------------------\n");
            printf("\n");

            i++;
        } 
        
       
    } while (i <= 4);

    return 0;

}