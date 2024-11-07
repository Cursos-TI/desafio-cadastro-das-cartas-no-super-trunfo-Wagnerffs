#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
      
      
    //criação as variáveis
    int cod = 25;
    float pop = 361.73;
    int area = 360;
    double pib = 361.123;
    int turismo = 25;
    char nome[50] = "parana";

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //criação das entradas e saídas 
    printf("Digite cod. da cidade\n");
    scanf("%d", &cod);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nome);

    printf("Qual é a população\n");
    scanf("%f", &pop);

    printf("Qual é a área\n");
    scanf("%d", &area);

    printf("Qual o PIB\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos\n");
    scanf("%d", &turismo);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //Exibição dos dados
    printf("O cód da cidade é: %d\n", cod);
    printf("O nome da cidade é: %s\n", nome);
    printf("A população é: %f\n", pop);
    printf("A área é: %d\n", area);
    printf("O PIB é: %f\n", pib);    
    printf("A qtde de pontos tuirísticos: %d\n", turismo);

    return 0;
}
