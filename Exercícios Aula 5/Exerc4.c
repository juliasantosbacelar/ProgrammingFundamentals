#include<stdio.h>
#include<stdlib.h>

/*4) Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.*/

int main () {

    double numeroRealUm, numeroRealDois, numeroRealTres, numeroRealQuatro, mediaAritmetica;

    printf("Digite um número quatro um reais:");
    scanf("%lf",&numeroRealUm);
    setbuf(stdin,NULL);

    printf("Digite o segundo número real:");
    scanf("%lf",&numeroRealDois);


    printf("Digite o terceiro número real:");
    scanf("%lf",&numeroRealTres);


    printf("Digite o quarto número real:");
    scanf("%lf",&numeroRealQuatro);

    mediaAritmetica = (numeroRealUm + numeroRealDois + numeroRealTres + numeroRealQuatro) / 4;

    printf("A média aritmética é de: %.2f\n", mediaAritmetica);

    return 0;
}