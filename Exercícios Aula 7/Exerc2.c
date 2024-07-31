#include<stdio.h>
#include<stdlib.h>


/*2) Crie uma calculadora usando a instrução switch, que 
pergunte qual das operações básicas quer fazer (+, -, * 
e /), em seguida peça os dois números e mostre o 
resultado da operação matemática entre eles*/


int main (){

    int opc, variavelA, variavelB, soma, subtracao, multiplicacao, divisao;

    printf("---------------------------------------\n");
    printf("|                MENU                  |\n"); 
    printf("|  1 -  SOMA                           |\n");
    printf("|  2 -  SUBTRAÇÃO                    |\n");
    printf("|  3 -  MULTIPLICAÇÃO                |\n");
    printf("|  4 -  DIVISÃO                       |\n");
    printf("---------------------------------------\n");

    printf("Digite a opção: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:

        printf("Você escolheu a opção soma\n");
        printf("Digite o primeiro número para efetuarmos a soma: ");
        scanf("%d", &variavelA);
        setbuf(stdin,NULL);

        printf("Digite o segundo número para efetuarmos a soma: ");
        scanf("%d", &variavelB);

        soma = (variavelA + variavelB);

        printf("O resultado da soma é de: %d", soma);

        //ta certo
        break;

    case 2:

        printf("Você escolheu a opção subtração\n");
        printf("Digite o primeiro número para efetuarmos a subtração: ");
        scanf("%d", &variavelA);
        setbuf(stdin,NULL);

        printf("Digite o segunda número para efetuarmos a subtração: ");
        scanf("%d", &variavelB);

        subtracao = (variavelA - variavelB);

        printf("O resultado da subtração é de: %d", subtracao);

        //ta certo
        break;  

    case 3:

        printf("Você escolheu a opção multiplicação\n");
        printf("Digite o primeiro número para efetuarmos a multiplicação: ");
        scanf("%d", &variavelA);
        setbuf(stdin,NULL);

        printf("Digite o segunda número para efetuarmos a multiplicação: ");
        scanf("%d", &variavelB);

        multiplicacao = (variavelA * variavelB);

        printf("O resultado da multiplicação é de: %d", multiplicacao);

        //ta certo
        break;   

    case 4:
    
        printf("Você escolheu a opção de divisão\n");
        printf("Digite o primeiro número para efetuarmos a divisão: ");
        scanf("%d", &variavelA);
        setbuf(stdin,NULL);

        printf("Digite o segunda número para efetuarmos a divisão: ");
        scanf("%d", &variavelB);

        divisao = (variavelA / variavelB);

        printf("O resultado da divisão é de: %d", divisao);

        // ta certo
        break;             
    
    default:

        printf("Escolha uma opção válida");
        break;
    }
                
}