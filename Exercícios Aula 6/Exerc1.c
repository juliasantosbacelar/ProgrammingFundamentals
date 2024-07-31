#include<stdio.h>
#include<stdlib.h>

/*1) Faça um programa que receba como entrada a nota de 
um aluno. O programa deve exibir “aprovado” caso a nota 
seja igual ou superior a 6, ou exibir “reprovado” caso 
contrário. */

int main () {

double NotaP1, NotaP2, media;


// entrada de dados da primeira prova 
printf("Digite a nota da sua P1: ");
scanf("%lf", &NotaP1);
setbuf(stdin,NULL);

// entrada de dados da segunda prova
printf("Digite a nota da sua P2: ");
scanf("%lf", &NotaP2);

    // média das notas das duas provas 
    media = (NotaP1 + NotaP2) / 2;


    //se for maior ou igual a 6 entrará neste if 
    if (media >= 6 ) {

        printf("Parabéns você foi aprovado! \n");
        printf("Sua nota final foi: %.1lf \n", media);
    }

    //se for menor que 6 entrará neste else
    else {
        printf("Infelizmente você foi reprovado!\n");
        printf("Sua nota final foi: %.1lf \n", media);
    }
}