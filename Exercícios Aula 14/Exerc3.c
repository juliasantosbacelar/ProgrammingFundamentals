#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*3)Escreva um procedimento que recebe por parâmetro as 3 notas de um aluno e uma letra. 
Se a letra for A, o procedimento calcula a média aritmética das notas do aluno, se for P, 
a sua média ponderada (pesos: 5, 3 e 2) e se for S, a soma das notas. 
O valor calculado também deve ser retornado e exibido na função main.*/


float valorFinal(char letras, float num1, float num2, float num3)
{
    float valor = 0;
    
    switch(letras){
        case 'A':
                valor = (num1 + num2 + num3)/3;
                return valor;
                break;
                
        case 'P':
                valor = (5 * num1 + 3 * num2 + 2 * num3)/10;
                return valor;
                break;
                
        case 'S':
                valor = num1 + num2 + num3;
                return valor;
                break;
    }//case exclusiva para as letras A, P e S.
}//fim da função valorFinal


        int main()
            {
                //declaração de variáveis
                float nota1, nota2, nota3, valor;
                char letra;
                
                //recebendo a letra e as notas 
                printf("Digite uma letra:");
                    scanf("%c", &letra);
                printf("Digite a nota 1:");
                    scanf("%f", &nota1);
                printf("Digite a nota 2:");
                    scanf("%f", &nota2);
                printf("Digite a nota 3:");
                    scanf("%f", &nota3);
                
                //o quem tem em valorFinal vai para valor
                valor = valorFinal(letra, nota1, nota2, nota3);
                
                    if(letra == 'A')//para a letra A
                    printf("A média aritmética é: %.2f", valor);
                    
                        if(letra == 'P')//para a letra P
                        printf("A média ponderada é: %.2f", valor);
                        
                            if(letra == 'S')//para a letra S
                            printf("A soma das notas é %.2f", valor);
                    
                return 0;
            }//fim main