#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// aqui é uma estrutura que ira armazenar os dados da carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Essa função é para ler os dados de uma carta       
struct Carta criarCarta(int numero) {
    struct Carta carta; // Declarar uma variável local para armazenar a carta

    printf("\nInsira os dados da Carta %d:\n", numero);
    printf("Estado (A-H): ");
    scanf(" %c", &carta.estado);  
    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", carta.codigo);   
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta.nomeCidade); 
    printf("População: ");
    scanf("%d", &carta.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta.pontosTuristicos);

    return carta; // Retorna a estrutura criada
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {

    // Ler as informações das duas cartas
    struct Carta carta1 = criarCarta(1);
    struct Carta carta2 = criarCarta(2);

    // Exibir as informações cadastradas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);


}


