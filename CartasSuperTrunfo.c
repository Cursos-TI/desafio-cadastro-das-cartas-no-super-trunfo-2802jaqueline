#include <stdio.h>
int main(){
          printf("Desafio cartas super trunfo!\n ");
          printf("Novo Commit\n");
          printf("CADASTRO DA CARTA 1\n");

          char Estado_1[30] = "Alagoas";
          char Código_1[30] = "A01";
          char NomedaCidade_1[30] = "Máceio";
          int População_1 = 3220104;
          float Área_1 = 27.768;
          float PIB_1 = 760.077;
          int PontosTuristicos_1 = 14;

          char Estado_2[30] = "Acre";
          char Código_2[30] = "B02";
          char NomedaCidade_2[30] = "Rio Branco";
          int População_2 = 830026;
          float Área_2 = 164.123;
          float PIB_2 = 173.300;
          int PontosTuristicos_2 = 8;

          printf("Estado:\n ");
          scanf("%s", Estado_1);

          printf("Código:\n ");
          scanf("%s", Código_1);

          printf("Nome Da Cidade:\n ");
          scanf("%s", NomedaCidade_1);

          printf("População:\n ");
          scanf("%d", &População_1);

          printf("Area Total:\n ");
          scanf("%f", &Área_1);

          printf("PIB:\n ");
          scanf("%f", &PIB_1);

          printf("Numeros de Pontos Turisticos:\n ");
          scanf("%d", &PontosTuristicos_1);

          printf("CADASTRO DA CARTA 2\n");

          printf("Estado:\n ");
          scanf("%s", Estado_2);

          printf("Código:\n ");
          scanf("%s", Código_2);

          printf("Nome Da Cidade:\n ");
          scanf("%s", NomedaCidade_2);

          printf("População:\n ");
          scanf("%d", &População_2);

          printf("Area Total:\n ");
          scanf("%f", &Área_2);

          printf("PIB:\n ");
          scanf("%f", &Área_2);

          printf("Numeros de Pontos Turisticos:\n ");
          scanf("%d", &PontosTuristicos_2);

          printf("DADOS DA CARTA 1\n");
          printf("Estado: %s - Código da Carta: %s\n", Estado_1, Código_1);
          printf("Nome Da Cidade: %s - População: %d\n", NomedaCidade_1, População_1);
          printf("Área Total: %.3f - PIB: %.3f\n", Área_1, PIB_1);
          printf("Numeros de Pontos Turisticos: %d\n", PontosTuristicos_1);

          printf("DADOS DA CARTA 2\n");
          printf("Estado: %s - Código da Carta: %s\n", Estado_2, Código_2);
          printf("Nome Da cidade: %s - População: %d\n", NomedaCidade_2, População_2);
          printf("Área Total: %.3f - PIB: %.3f\n", Área_2, PIB_2);
          printf("Numeros de Pontos Turisticos: %d", PontosTuristicos_2);

          return 0;
}

  