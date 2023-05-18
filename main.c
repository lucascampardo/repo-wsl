#include <stdio.h>

int main(){
    char nome[20]; // Ler nome de até 20 caracteres
    float salario; // Ler salario

    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    float aumento = salario + (salario * 0.2); // Calcular aumento de 20%
    
    printf("Seu salario com 20%% de aumento eh: %.2f\n", aumento);
}