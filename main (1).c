#include <stdio.h>
#include <locale.h>
int main(){
    
    char nome[50];
    float salario, percentual, novo_salario;
    
    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);
    
    printf("Digite o salario da pessoa: R$");
    scanf("%f", &salario);
    
    printf("Digite o valor do percentual: ");
    scanf("%f", &percentual);
    
    novo_salario = salario *(1+percentual/100);
    printf("Novo salario de %s> R$%2.f\n", nome, novo_salario);
    
    return 0;
}