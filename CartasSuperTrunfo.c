#include <stdio.h>

int main() {
    // Variáveis Carta 1
    unsigned long int pop1, pop2;
    float area1, pib1;
    char estado1[3], cod1[20], cidade1[20];

    // Variáveis Carta 2
    int tur1, tur2;
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

    //Após muita luta descobri essa solução para o projetor para de pular
    printf("Qual o Nome da Cidade?\n");
    scanf(" %[^\n]", cidade1); 

    printf("Qual a População?\n");
    scanf( "%d", &pop1);

    printf("Qual a Área?\n");
    scanf(" %f", &area1);

    printf("Qual o PIB?\n");
    scanf(" %f", &pib1);

    printf("Qual o Número de Pontos Turísticos?\n");
    scanf(" %d", &tur1);

    // Pegando dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Qual o Estado?\n");
    scanf(" %s", estado2);

    printf("Qual o Código?\n");
    scanf(" %s", cod2);

    //Após muita luta descobri essa solução para o projetor para de pular
    printf("Qual o Nome da Cidade?\n");
    scanf(" %[^\n]", cidade2);

    printf("Qual a População?\n");
    scanf(" %d", &pop2);

    printf("Qual a Área?\n");
    scanf(" %f", &area2);

    printf("Qual o PIB?\n");
    scanf(" %f", &pib2);

    printf("Qual o Número de Pontos Turísticos?\n");
    scanf(" %d", &tur2);
    
    //Novas Variaveis - Nível Aventureiro
    float dp1 = pop1/area1;
    float pc1 = (pib1*1000000000)/pop1;
    
    float dp2 = pop2/area2;
    float pc2 = (pib2*1000000000)/pop2;

    //Super Poder - Nível Mestre
    double super1 = pop1 + area1 + pib1 + tur1 + pc1 + (1/dp1);
    double super2 = pop2 + area2 + pib2 + tur2 + pc2 + (1/dp2);


    // Imprimindo dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    
    //Novas Impressões - Nível Aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    printf("PIB per Capita: %.2f de reais\n", pc1);
    printf("Super Poder: %.2lf\n", super1);

    // Imprimindo dados da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);   

    //Novas Impressões - Nível Aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: %.2f de reais\n", pc2);
    printf("Super Poder: %.2lf\n", super2); 


    //Comparação das Cartas
    printf("\nComparação de Cartas\n");

    printf("População: ");
    if (pop1 > pop2){
        printf("Carta 1 venceu (%d)\n", pop1 > pop2);}
     else { 
        printf("Carta 2 venceu (%d)\n", pop1 < pop2);
    }

    printf("Área: ");
    if (area1 > area2){
        printf("Carta 1 venceu (%d)\n", area1 > area2);}
     else { 
        printf("Carta 2 venceu (%d)\n", area1 < area2);
    }

    printf("PIB: ");
    if (pib1 > pib2){
        printf("Carta 1 venceu (%d)\n", pib1 > pib2);}
     else { 
        printf("Carta 2 venceu (%d)\n", pib1 < pib2);
    }

    printf("Pontos Turísticos: ");
    if (tur1 > tur2){
        printf("Carta 1 venceu (%d)\n", tur1 > tur2);}
     else { 
        printf("Carta 2 venceu (%d)\n", tur1 < tur2);
    }

    printf("Densidade Populacional: ");
    if (dp1 < dp2){
        printf("Carta 1 venceu (1)\n", dp1 < dp2);}
     else { 
        printf("Carta 2 venceu (0)\n", dp1 > dp2);
    }

    printf("PIB per Capita: ");
    if (pc1 > pc2){
        printf("Carta 1 venceu (1)\n", pc1 > pc2);}
     else { 
        printf("Carta 2 venceu (0)\n", pc1 < pc2);
    }

    printf("Super Poder: ");
    if (super1 > super2){
        printf("Carta 1 venceu (1)\n", super1 > super2);}
     else { 
        printf("Carta 2 venceu (0)\n", super1 < super2);
    }

    return 0;
}
