#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[3];
    char codigoDaCarta[20];
    char nomeDaCidade[50];
    int populacao;
    float areaKM2;
    float PIB;
    int numeroDePontosTuristicos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado: \n");
    scanf("%2s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeDaCidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &areaKM2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s\n", nomeDaCidade);
    printf("Populacao: %d\n", populacao);
    printf("ÁAea em KM2: %f\n", areaKM2);
    printf("PIB: %f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", numeroDePontosTuristicos);

    return 0;
}
