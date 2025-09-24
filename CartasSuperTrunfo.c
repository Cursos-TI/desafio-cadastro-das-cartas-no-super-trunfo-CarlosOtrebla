#include <stdio.h>
#include <string.h>
#include <windows.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

/*
Dados das Cidades:

Petrópolis-RJ
    População: 278.881 habitantes
    Área: 795,798 km²
    PIB: R$ 15,665 bilhões


Teresópolis-RJ
    População: 165.123 habitantes
    Área: 773,338 km²
    PIB: R$ 5,923 bilhões

*/

int main()
{
    // Configurar codificação para UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Atributos da Carta 1:
    char estado = '\0'; // Inicializa o estado como um caractere nulo
    char codigoCidade[4] = "";
    char nomeCidade[50] = "";
    unsigned long int populacao = 0;
    float area = 0.0;
    double pib = 0.0;
    float pibPerCapta = 0.0;
    float densidadePopulacional = 0.0;
    int pontosTuristico = 0;
    float superPoder = 0.0;
    int c1PopulacaoVence, c1AreaVence, c1PibVence, c1PontosTurVence, c1PibPerCaptaVence, c1DensiPopulacionalVence;
    float c1SuperPoderVence;

    // Atributos da Carta 2:
    char estado2 = '\0'; // Inicializa o estado como um caractere nulo
    char codigoCidade2[4] = "";
    char nomeCidade2[50] = "";
    unsigned long int populacao2 = 0;
    float area2 = 0.0;
    double pib2 = 0.0;
    float pibPerCapta2 = 0.0;
    float densidadePopulacional2 = 0.0;
    int pontosTuristico2 = 0;
    float superPoder2 = 0.0;
    int c2PopulacaoVence, c2AreaVence, c2PibVence, c2PontosTurVence, c2PibPerCaptaVence, c2DensePopulacionalVence;
    float c2SuperPoderVence;

    // Cadastro das Cartas:
    printf("\n");
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║ Cadastro de Cartas Super Trunfo - Países ║\n");
    printf("╚══════════════════════════════════════════╝\n");
    printf("\n▓ Por favor, insira os dados da 1ª carta:\n\n");

    printf("┌ Estado (Uma letra de 'A a H'): ");
    scanf(" %c", &estado);

    int codigo;
    printf("├ Digite um número de 1 a 4 para compor o código do Estado %c: ", estado);
    scanf("%d", &codigo);

    sprintf(codigoCidade, "%c%02d", estado, codigo);

    printf("├ Nome da Cidade: ");
    scanf("%s", nomeCidade);

    printf("├ População: ");
    scanf("%lu", &populacao);

    printf("├ Área: ");
    scanf("%f", &area);

    printf("├ PIB: ");
    scanf("%lf", &pib);

    printf("└ Pontos Turísticos: ");
    scanf("%d", &pontosTuristico);

    densidadePopulacional = (float)populacao / area;
    pibPerCapta = pib / populacao;
    superPoder = (float)populacao + (float)area + (float)pib + (float)pontosTuristico + (float)pibPerCapta + (1 / densidadePopulacional);

    // Cadastro carta 2

    printf("\n▓ Por favor, insira os dados da 2ª carta:\n\n");

    printf("┌ Estado (Uma letra de 'A a H'): ");
    scanf(" %c", &estado2);

    int codigo2;
    printf("├ Digite um número de 1 a 4 para compor o código do Estado %c: ", estado2);
    scanf("%d", &codigo2);

    sprintf(codigoCidade2, "%c%02d", estado2, codigo2);

    printf("├ Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("├ População: ");
    scanf("%lu", &populacao2);

    printf("├ Área: ");
    scanf("%f", &area2);

    printf("├ PIB: ");
    scanf("%lf", &pib2);

    printf("└ Pontos Turísticos: ");
    scanf("%d", &pontosTuristico2);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristico2 + (float)pibPerCapta2 + (1 / densidadePopulacional2);


    c1PopulacaoVence = populacao > populacao2;
    c2PopulacaoVence = populacao2 > populacao;
    c1AreaVence = area > area2;
    c2AreaVence = area2 > area;
    c1PibVence = pib > pib2;
    c2PibVence = pib2 > pib;
    c1PontosTurVence = pontosTuristico > pontosTuristico2;
    c2PontosTurVence = pontosTuristico2 > pontosTuristico;
    c1DensiPopulacionalVence = densidadePopulacional < densidadePopulacional2;
    c2DensePopulacionalVence = densidadePopulacional2 < densidadePopulacional;
    c1PibPerCaptaVence = pibPerCapta > pibPerCapta2;
    c2PibPerCaptaVence = pibPerCapta2 > pibPerCapta;
    c1SuperPoderVence = superPoder > superPoder2;
    c2SuperPoderVence = superPoder2 > superPoder;

    // Exibição dos Dados das Cartas:
    printf("\nDados da Carta 1:\n\n");
    printf("   Estado: %c\n", estado);
    printf("   Código da Cidade: %s\n", codigoCidade);
    printf("   Nome da Cidade: %s\n", nomeCidade);
    printf("   População: %lu habitantes\n", populacao);
    printf("   Área: %.2f km²\n", area);
    printf("   PIB: R$ %.2lf\n", pib);
    printf("   Pontos Turísticos: %d\n", pontosTuristico);
    printf("   A densidadePopulacional: %.2f\n", densidadePopulacional);
    printf("   O PIB per capita é: %.2f\n", pibPerCapta);
    printf("   Super poder: %.2f\n", superPoder);

    // Exibição dos Dados das Cartas:
    printf("\nDados da Carta 2:\n\n");
    printf("   Estado: %c\n", estado2);
    printf("   Código da Cidade: %s\n", codigoCidade2);
    printf("   Nome da Cidade: %s\n", nomeCidade2);
    printf("   População: %lu habitantes\n", populacao2);
    printf("   Área: %.2f km²\n", area2);
    printf("   PIB: R$ %.2lf\n", pib2);
    printf("   Pontos Turísticos: %d\n", pontosTuristico2);
    printf("   A densidadePopulacional: %.2f\n", densidadePopulacional2);
    printf("   O PIB per capita é: %.2f\n", pibPerCapta2);
    printf("   Super poder: %.2f\n", superPoder2);

    // Comparação de Cartas:
    printf("\n");
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║          Comparação de Cartas            ║\n");
    printf("╚══════════════════════════════════════════╝\n");
    int opcao;
    printf("Qual atributo deseja comparar?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            if (c1PopulacaoVence) {
                printf("População: Carta 1 venceu (1)\n");
            } else if (c2PopulacaoVence) {
                printf("População: Carta 2 venceu (1)\n");
            } else {
                printf("População: Empate (0)\n");
            }
            break;
        case 2:
            if (c1AreaVence) {
                printf("Área: Carta 1 venceu (1)\n");
            } else if (c2AreaVence) {
                printf("Área: Carta 2 venceu (1)\n");
            } else {
                printf("Área: Empate (0)\n");
            }
            break;
        case 3:
            if (c1PibVence) {
                printf("PIB: Carta 1 venceu (1)\n");
            } else if (c2PibVence) {
                printf("PIB: Carta 2 venceu (1)\n");
            } else {
                printf("PIB: Empate (0)\n");
            }
            break;
        case 4:
            if (c1PontosTurVence) {
                printf("Pontos Turísticos: Carta 1 venceu (1)\n");
            } else if (c2PontosTurVence) {
                printf("Pontos Turísticos: Carta 2 venceu (1)\n");
            } else {
                printf("Pontos Turísticos: Empate (0)\n");
            }
            break;
        case 5:
            if (c1DensiPopulacionalVence) {
                printf("Densidade Populacional: Carta 1 venceu (1)\n");
            } else if (c2DensePopulacionalVence) {
                printf("Densidade Populacional: Carta 2 venceu (1)\n");
            } else {
                printf("Densidade Populacional: Empate (0)\n");
            }
            break;
        case 6:
            if (c1PibPerCaptaVence) {
                printf("PIB per Capita: Carta 1 venceu (1)\n");
            } else if (c2PibPerCaptaVence) {
                printf("PIB per Capita: Carta 2 venceu (1)\n");
            } else {
                printf("PIB per Capita: Empate (0)\n");
            }
            break;
        case 7:
            if (c1SuperPoderVence) {
                printf("Super Poder: Carta 1 venceu (1)\n");
            } else if (c2SuperPoderVence) {
                printf("Super Poder: Carta 2 venceu (1)\n");
            } else {
                printf("Super Poder: Empate (0)\n");
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    printf("\nPressione ENTER para finalizar ...\n");
    getchar();
    getchar(); // Dois getchar() para capturar o Enter do último scanf
    return 0;
}