#include<stdio.h>
#include<stdlib.h>

/*4) Faça um programa que calcule o imposto de renda a ser 
pago tendo como entrada o salário de um empregado. O 
imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução*/

int main () {

    double imposto, salario, aliquota, parceladeDeducao;

    printf("Digite o seu salário:");
    scanf("%lf", &salario);

    if (salario <= 1903.98 ){
        printf("Seu salário está na categoria de isento\n");

        aliquota = 0;
        parceladeDeducao = 0;

        imposto = salario * aliquota - parceladeDeducao;

        printf("Você não paga imposto, ou seja: R$ %.2lf", imposto);

    } if (salario >= 1903.99 && salario <= 2826.65){
            printf("Seu salário entra na primeira categoria do imposto de renda\n");
            printf("Vamo calcular quanto você vai pagar\n");

            aliquota = 0.075;
            parceladeDeducao = 142.80;

            imposto = salario * aliquota - parceladeDeducao;

            printf("Seu imposto saiu por: R$ %.2lf", imposto);
        
    }
    if(salario >= 2826.66 && salario <= 3751.05){
        printf("Seu salário entra na segunda categoria do imposto de renda\n");
        printf("Vamo calcular quanto você vai pagar\n");

        aliquota = 0.15;
        parceladeDeducao = 354.80;

        imposto = salario * aliquota - parceladeDeducao;

        printf("Seu imposto saiu por: R$ %.2lf", imposto);

    }
    if (salario >= 3751.06 && salario <= 4664.68){
        printf("Seu salário entra na terceira categoria do imposto de renda\n");
        printf("Vamo calcular quanto você vai pagar\n");

        aliquota = 0.225;
        parceladeDeducao = 636.13;

        imposto = salario * aliquota - parceladeDeducao;

        printf("Seu imposto saiu por: R$ %.2lf", imposto);


    } 
    if(salario > 4664.68){
        printf("Seu salário entra na quarta categoria do imposto de renda\n");
        printf("Vamo calcular quanto você vai pagar\n");

        aliquota = 0.275;
        parceladeDeducao = 869.36;

        imposto = salario * aliquota - parceladeDeducao;

        printf("Seu imposto saiu por: R$ %.2lf", imposto);


    }


return 0;
}//MAIN