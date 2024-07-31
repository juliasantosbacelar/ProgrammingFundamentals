#include<stdio.h>
#include<stdlib.h>
/*2) Uma conta de caderneta de poupança foi aberta com um 
depósito de R$ 500,00. Imagine que esta conta é remunerada 
em 1% de juros ao mês. Qual será o valor da conta após três 
meses?*/

int main(){

    double si, juros, jtm, saldo, saldon;
    //si = saldo inicial
    //juros = o valor do juros mensal;
    //jtm= juros de trÊs meses
    //saldo = saldo após um mês rendendo;
    //saldon = saldo após três meses rendendo;

   
    si = 500;

    //após um mes de juros rendidos 

    juros = si * 0.01;

    saldo = juros + si;

    //Após três meses de juros rendidos

    jtm = juros * 3; //juros após três meses 15 reais;
    saldon = jtm + si; // saldon = juros dos três e meses + o saldo inicial

    printf("Saldo inicial R$ %.2lf \n", si);
    printf("Saldo após o rendimento de um mês:R$ %.2lf \n", saldo);
    printf("Saldo após três meses rendendo: R$ %.2lf \n", saldon);
    return 0;
}