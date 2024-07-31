#include<stdio.h>
#include<stdlib.h>

/*1) Escreva um programa para determinar a quantidade de litros 
de combustível gastos em uma viagem por um automóvel que 
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem 
é de 35 min e a velocidade média do automóvel é 80 km/h.*/
 

int main()
{
    
    double distancia,     
          tempo,  
          velocidade= 80,   
          consumot; 
  
    tempo = 35 / 60.0;
    distancia = tempo * velocidade;
    consumot = distancia / 12;
   
 

    printf("Distancia        = %.2lf Km \n", distancia);
    printf("LITROS USADOS    = %.2lf litros \n", consumot);
 
    return(0);
}
