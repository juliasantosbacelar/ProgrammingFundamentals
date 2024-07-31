#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*3) Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da 
equação (se existirem).*/

int main () {

    int A, B, C, delta, raiz;
    double x1, x2;

    //entrda de dados
    printf("Vamos fazer uma equação de segundo grau? \n");
    printf("Para isso, digite o coeficientes a: ");
    scanf("%d",&A);
    setbuf(stdin,NULL);

    printf("O coeficientes b:");
    scanf("%d",&B);
    setbuf(stdin,NULL);

    printf("O coeficientes c:");
    scanf("%d",&C);

        //calculando o delta 
        delta = (B * B) - (4 * A * C); 
       
        
        

            //se delta for maior que 0, então:
            if(delta > 0)
            {
                printf("Delta é igual à: %i \n", delta);
                //printf("\n A raiz é igual à: %i \n", raiz);
                        
                //calculando os x
                x1 = ((- B + sqrt(delta)) / (2 * A));
                x2 = ((- B - sqrt(delta)) / (2 * A));
                
            
                printf("X1 = %.2lf \n", x1);
                printf("X2 = %.2lf", x2);
                
            }
            //se for menor que zero, então:
            else {
                printf("Delta é igual à: %i \n", delta);
                printf("Raiz de número negativo NÃO existe");
                
            }

        

        

    return 0;
}