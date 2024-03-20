#include <stdio.h>
int main(){
    float velocidade = 900;
    float distancia, tempo;
    
    printf("Digite a distancia a ser percorrida pelo aviao: ");
    scanf("%f", &distancia);
    
    tempo = distancia / velocidade;
    
    printf("O tempo necessario para percorrer %.2f km: %.2f horas\n", distancia, tempo);
    
    return 0;
}