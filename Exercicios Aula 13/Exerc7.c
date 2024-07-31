#include<stdio.h>
#include<stdio.h>
#include<string.h>

/*7) Escreva um programa que receba uma sigla de um estado da região 
Sul ou Sudeste e exiba o nome completo do estado correspondente*/

int main(){
    const int nmrEstados = 7;
    char vetorSigla[4], vetorSiglaDois[7][4] = {"SP", "RJ", "ES", "MG", "PR", "SC", "RS"};
    char vetorEstadoNome[7][21]={"São Paulo", "Rio de Janeiroxxx", "Espírito Santo", "Minas Gerais", "Paraná", "Santa Catarina", "Rio Grande do Sul"};
    int i, validacao = 0;

    //solicitando a sigla

    printf("Digite a sigla que deseja descobrir o nome:");
    fgets(vetorSigla,3,stdin);
    vetorSigla[strcspn(vetorSigla,"\n")]='\0';
    setbuf(stdin,NULL);

    for(i = 0; i < nmrEstados; i++){
            if(strcasecmp(vetorSigla, vetorSiglaDois[i]) == 0){
                printf("%s\n", nmrEstados[i]);
                validacao++;
            }
        
    }
    
    //validando se a sigla é valida 
    if(validacao == 0){
        printf("Sigla invalida\n");
        printf("Digite novamente");
    }
    return 0;
}