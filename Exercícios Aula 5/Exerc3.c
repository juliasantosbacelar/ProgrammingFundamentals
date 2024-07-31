#include <stdio.h>
#include <stdlib.h>

/*3) Tendo como entrada de dados o total vendido por um 
funcionário no mês, calcule a sua comissão e o salário bruto no 
mês. Para isso, considere um salário base de R$1.200,00 e 
comissão de 10% sobre o total vendido.
*/

int main() {

    float tvendido, 
    comissao, 
    salarioBruto,
    salarioFinal;


    salarioBruto = 1200.00;
    
    printf("Quanto foi o total de vendas mensal: \n");
    scanf("%.2f", &tvendido);
    setbuf(stdin, NULL);
    
    comissao = 0.10 * tvendido;
    salarioFinal = salarioBruto + comissao;

    printf("Seu salário esse mês é de: %.2f \n", salarioFinal);
    return 0;
}