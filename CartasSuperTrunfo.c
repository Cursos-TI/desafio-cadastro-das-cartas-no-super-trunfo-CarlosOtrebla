#include <stdio.h>
#include <string.h>
#include <windows.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{
    // Configurar codificação para UTF-8
    SetConsoleOutputCP(65001); // UTF-8
    SetConsoleCP(65001);       // UTF-8 para entrada também

    // Atributos da Carta:
    char estado = '\0'; // Inicializa o estado como um caractere nulo
    char codigoCidade[4] = "";
    char nomeCidade[50] = "";
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int pontosTuristico = 0;

    // Cadastro das Cartas:
    printf("\n");
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║ Cadastro de Cartas Super Trunfo - Países ║\n");
    printf("╚══════════════════════════════════════════╝\n\n");
    printf("▓ Por favor, insira os dados da 1ª carta:\n\n");

    printf("┌ Estado (Uma letra de 'A a H'): ");
    scanf(" %c", &estado);

    int codigo;
    printf("├ Digite um número de 1 a 4 para compor o código do Estado: %c", estado);
    scanf("%d", &codigo);

    sprintf(codigoCidade, "%c%02d", estado, codigo);

    printf("├ Nome da Cidade: ");
    scanf("%s", nomeCidade);

    printf("├ População: ");
    scanf("%d", &populacao);

    printf("├ Área: ");
    scanf("%f", &area);

    printf("├ PIB: ");
    scanf("%f", &pib);

    printf("└ Pontos Turísticos: ");
    scanf("%d", &pontosTuristico);

    // Exibição dos Dados das Cartas:
    printf("\nDados da Carta 1:\n\n");
    printf("   Estado: %c\n", estado);
    printf("   Código da Cidade: %s\n", codigoCidade);
    printf("   Nome da Cidade: %s\n", nomeCidade);
    printf("   População: %d habitantes\n", populacao);
    printf("   Área: %.2f km²\n", area);
    printf("   PIB: %.2f Bilhões de Reais\n", pib);
    printf("   Pontos Turísticos: %d\n\n", pontosTuristico);

    printf("Pressione ENTER para finalizar ...\n");
    getchar();
    getchar(); // Dois getchar() para capturar o Enter do último scanf
    return 0;
}
