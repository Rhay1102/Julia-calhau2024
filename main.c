#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL"");
    float velocidade, distancia, tempo;
    
    printf("Digite a velocidade do carro");
    scanf("%f", &velocidade);
    
    printf("Digite a distância a ser percorrida em KM: ");
    scanf("%f", &distancia);
    
    tempo = distancia/velocidade;
    
    printf("O tempo necessário para percorrer %2.f km: %2.f horas \n", distancia, tempo);
    
    return 0;
    
}
