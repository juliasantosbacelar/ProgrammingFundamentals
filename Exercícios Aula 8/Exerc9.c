#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*9) Faça um programa que simule um jogo, onde o usuário 
deverá descobrir um número aleatório escolhido pelo 
computador (de 1 a 100).
 O usuário poderá realizar até 6 tentativas, o programa deverá 
retornar as mensagens “muito alto”, “muito baixo” até o usuário 
acertar o número ou esgotar o número máximo de tentativas
*/
int main () {

    srand(time(0));

    int numeroDigitado, numeroSorteado, tentativas = 0;

    numeroSorteado = rand() % 100  + 1 ;

    do {
        printf("digite um número:");
        scanf("%d", &numeroDigitado);
        tentativas++;

        if(numeroDigitado > numeroSorteado){
            printf("Muito alto! \n");
            printf("Você ainda tem %d tentativas", 6 - tentativas);
        }
        if(numeroSorteado < numeroDigitado){
            printf("Muito baixo! \n");
            printf("Você ainda tem %d tentativas", 6 - tentativas);
        } else {
            printf("Parabéns você acertou!");
        }

    } while (numeroDigitado != numeroSorteado && tentativas >= 0);
    
    if (numeroDigitado != numeroSorteado) {
        printf("você perdeu! O número sorteado é: %d", numeroSorteado);
    } else {
        printf("Você acertou! Com %d tentativas \n", 6 - numeroSorteado);
    }

    printf("");
    return 0;

}