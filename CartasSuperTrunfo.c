#include <stdio.h>
int main(){
    printf("Desafio Carta Super Trunfo!\n");
    printf("Novo commit\n");
    printf("Carta 01\n");

    char Estado[20] = "Alagoas";
    char Código[20] = "A01";
    char Nomedacidade[20] = "Máceio";
    int População = 3220104;
    float Área = 27.760;
    float PIB = 760.078;
    int Númerosdepontosturisticos = 13;

    printf("Estado:\n");
    scanf("%s", Estado);

    printf("Código:\n");
    scanf("%s", Código);

    printf("Nome da cidade:\n");
    scanf("%s", Nomedacidade);

    printf("População:\n");
    scanf("%d", &População);

    printf("Área:\n");
    scanf("%f", &Área);

    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Número de pontos turisticos:\n");
    scanf("%d", &Númerosdepontosturisticos);

    printf("Estado: %s - Código: %s\n", Estado, Código);
    printf("Nome da cidade: %s - População: %d - Área: %f\n", Nomedacidade, População, Área);
    printf("PIB: %.3f- Números de pontos turisticos: %d\n", PIB, Númerosdepontosturisticos);

    return 0;



 }