#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Nível Aventureiro: Densidade Populacional e PIB per Capita

int main() {
    // --- Variáveis para a CARTA 1 ---
    char Estado1[3];
    char CodigoDaCarta1[4];
    char NomeDaCidade1[50];
    long long int Populacao1;
    double AreaEmKm2_1;
    double PIB1;
    int NumeroDePontosTuristicos1;
    float DensidadePopulacional1;
    float PibPerCapita1;

    // --- Variáveis para a CARTA 2 ---
    char Estado2[3];
    char CodigoDaCarta2[4];
    char NomeDaCidade2[50];
    long long int Populacao2;
    double AreaEmKm2_2;
    double PIB2;
    int NumeroDePontosTuristicos2;
    float DensidadePopulacional2;
    float PibPerCapita2;

    //ENTRADA DE DADOS: CARTA 1
    
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    printf("Digite o Estado (sigla com 2 letras): ");
    scanf(" %s", Estado1); 

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf(" %s", CodigoDaCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeDaCidade1); // Lê espaços até o Enter

    printf("Digite a Populacao: ");
    scanf(" %lld", &Populacao1);

    printf("Digite a Area em Km2: ");
    scanf(" %lf", &AreaEmKm2_1);

    printf("Digite o PIB: ");
    scanf(" %lf", &PIB1);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf(" %d", &NumeroDePontosTuristicos1);


    //ENTRADA DE DADOS: CARTA 2
   
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    
    printf("Digite o Estado (sigla com 2 letras): ");
    scanf(" %s", Estado2); 

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf(" %s", CodigoDaCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeDaCidade2);

    printf("Digite a Populacao: ");
    scanf(" %lld", &Populacao2);

    printf("Digite a Area em Km2: ");
    scanf(" %lf", &AreaEmKm2_2);

    printf("Digite o PIB: ");
    scanf(" %lf", &PIB2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf(" %d", &NumeroDePontosTuristicos2);


    //CÁLCULOS    
    
    // Cálculos da Carta 1
    DensidadePopulacional1 = (float) Populacao1 / AreaEmKm2_1;
    PibPerCapita1 = (float) PIB1 / Populacao1;

    // Cálculos da Carta 2
    DensidadePopulacional2 = (float) Populacao2 / AreaEmKm2_2;
    PibPerCapita2 = (float) PIB2 / Populacao2;


    // EXIBIÇÃO DOS RESULTADOS
  
    printf("\n\n==================================\n");
    printf("       COMPILADO DOS DADOS        \n");
    printf("==================================\n");

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %lld\n", Populacao1);
    printf("Area: %.2lf km2\n", AreaEmKm2_1);
    printf("PIB: %.2lf\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", NumeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("Populacao: %lld\n", Populacao2);
    printf("Area: %.2lf km2\n", AreaEmKm2_2);
    printf("PIB: %.2lf\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita2);

    return 0;
}
