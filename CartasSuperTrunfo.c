#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {
    char Estado[3];
    char CodigoDaCarta[4];
    char NomeDaCidade[50];
    long long int Populacao;
    double AreaEmKm2;
    double PIB;
    int NumeroDePontosTuristicos;

    // Área para entrada de dados corrigida
    printf("Digite o Estado (sigla com 2 letras): ");
    scanf(" %s", Estado); // Espaço antes do % limpa o buffer

    printf("Digite o Codigo da Carta (ex: RO01): ");
    scanf(" %s", CodigoDaCarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeDaCidade); // Lê espaços até o Enter!

    printf("Digite a Populacao: ");
    scanf(" %lld", &Populacao);

    printf("Digite a Area em Km2: ");
    scanf(" %lf", &AreaEmKm2);

    printf("Digite o PIB: ");
    scanf(" %lf", &PIB);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf(" %d", &NumeroDePontosTuristicos);

    // Área para exibição dos dados
    printf("\n--- DADOS DA CARTA ---\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", CodigoDaCarta);
    printf("Nome da Cidade: %s\n", NomeDaCidade);
    printf("Populacao: %lld habitantes\n", Populacao);
    printf("Area: %.2lf Km2\n", AreaEmKm2);
    printf("PIB: %.2lf\n", PIB);
    printf("Pontos Turisticos: %d\n", NumeroDePontosTuristicos);

    return 0;
}
