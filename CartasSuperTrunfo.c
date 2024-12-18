#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade;
      
      
    //criação das variáveis;
    int cod = 25;
    int pop = 360;
    float area = 360.123;
    float pib = 365.321;
    double densidade = 366.852; //população dividido pela area;
    float pibpc = 365.321; //pib pela população;
    int turismo = 25;
    char nome[50] = "parana";

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //criação das entradas e saídas; 
    printf("Digite cod. da cidade\n");
    scanf("%d", &cod);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nome);

    printf("Qual é a população\n");
    scanf("%d", &pop);

    printf("Qual é a área\n");
    scanf("%f", &area);

    printf("Qual o PIB\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos\n");
    scanf("%d", &turismo);

    densidade =  pop / area;
    pibpc = pib / pop;

    
    // Exibição dos Dados das Cartas;
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //Exibição dos dados
    printf("O código da cidade é: %d\n", cod);
    printf("O nome da cidade é: %s\n", nome);
    printf("A população é de: %d milhões\n", pop);
    printf("A área é: %.3f km2\n", area);
    printf("O PIB é: %.3f\n", pib);    
    printf("A qtde de pontos tuirísticos: %d\n", turismo);
    printf("A densidade populacional é de: %.3f\n", densidade);
    printf("O PIB per capita é: %.3f\n", pibpc);

    return 0;
}
