#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
     int cod = 10;
     char nome[25] = "Brasil";
     float pop = 480.000;
     int area = 360;
     double pib = 3682.000;
     int turismo = 25;

     printf("Digite o código da cidade\n");
     scanf("%d", &cod);
     printf("Digite o nome da cidade\n");
     scanf("%s", &nome);
     printf("Qual é a população\n");
     scanf("%f", &pop);
     printf("Qual a área\n");
     scanf("%f", &area);
     printf("Digite o PIB\n");
     scanf("%f", &pib);
     printf("Quantos pontos turísticos");
     scanf("%d", &turismo)

     
     
     
     //printf("cód da cidade é:%d\n", cod);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
