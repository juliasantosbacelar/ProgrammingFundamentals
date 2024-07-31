#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*2)Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7*/

void calculoPeso()
{
    //variaveis
    int sexo;
    double pesoIdeal, altura;
    
    //recebendo o parametro do usuario
    printf("Escolha o seu sexo:\n");
    printf("1- Feminino\n");
    printf("2- Masculino\n");
    scanf("%i", &sexo);
    
    //cases dos parametros
    switch (sexo)
    {
    case 1:

        //recebendo a altura
        printf("Digite sua altura:\n");
        scanf("%lf", &altura);

        //calculando o peso ideal
        pesoIdeal = (altura * 62.1) - 44.7;

        //exibindo o peso ideal
        printf("\nSeu peso ideal é: %.2lf\n", pesoIdeal);
        
        break;
      
      case 2:

        //recebendo a altura
        printf("Digite sua altura:\n");
        scanf("%lf", &altura);

        //calculando o peso ideal
        pesoIdeal = (altura * 72.7) - 58;

        //exibindo o peso ideal
        printf("Seu peso ideal é: %.2lf\n", pesoIdeal);
        
        break;
    default:
        printf("\nFavor digitar um valor valido!!!\n");

        break;
    }//switch

    return 0;
}//case do calculo do peso ideal

            int main(int argc, char const *argv[])
            {
                //para o usuário, esse é o começo do programa
                printf("Esse programa calcula seu peso ideal de acordo com seu sexo.\n");
                
                calculoPeso();

                return 0;
            }//main