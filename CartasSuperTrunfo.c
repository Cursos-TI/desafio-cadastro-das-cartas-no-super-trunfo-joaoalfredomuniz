#include <stdio.h>

int main() {
    // Variáveis Carta 1
    int pop1, turisco1;
    float area1, pib1;
    char estado1[3], cod1[20], cidade1[20];

    // Variáveis Carta 2
    int pop2, turisco2;
    float area2, pib2;
    char estado2[3], cod2[20], cidade2[20];

    // Imprimindo mensagem de boas-vindas
    printf("Olá!\nBem-vindo ao Super Trunfo\nPara começar, insira os dados das cartas!\n\n");

    // Pegando dados da Carta 1
    printf("Carta 1:\n");
    printf("Qual o Estado?\n");
    scanf(" %s", estado1);

    printf("Qual o Código?\n");
    scanf(" %s", cod1);

    printf("Qual o Nome da Cidade?\n");
    scanf(" %s", cidade1);

    printf("Qual a População?\n");
    scanf( "%d", &pop1);

    printf("Qual a Área?\n");
    scanf(" %f", &area1);

    printf("Qual o PIB?\n");
    scanf(" %f", &pib1);

    printf("Qual o Número de Pontos Turísticos?\n");
    scanf(" %d", &turisco1);

    // Pegando dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Qual o Estado?\n");
    scanf(" %s", estado2);

    printf("Qual o Código?\n");
    scanf(" %s", cod2);

    printf("Qual o Nome da Cidade?\n");
    scanf(" %s", cidade2);

    printf("Qual a População?\n");
    scanf(" %d", &pop2);

    printf("Qual a Área?\n");
    scanf(" %f", &area2);

    printf("Qual o PIB?\n");
    scanf(" %f", &pib2);

    printf("Qual o Número de Pontos Turísticos?\n");
    scanf(" %d", &turisco2);

    // Imprimindo dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisco1);

    // Imprimindo dados da Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisco2);

    return 0;
}
