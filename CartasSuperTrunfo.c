#include <stdio.h>
int main(){
          printf("Desafio cartas super trunfo!\n ");
          printf("Novo Commit\n");
          printf("CADASTRO DA CARTA 1\n");

          char Estado_1[30] = "Alagoas";
          char Código_1[30] = "A01";
          char NomedaCidade_1[30] = "Máceio";
          unsigned long int População_1 = 3220104;
          float Área_1 = 277680.00;
          float PIB_1 = 2760077.00;
          int PontosTuristicos_1 = 14;
          float densidadepopulacional_1 = (float) População_1 / Área_1;
          float PIBpercapita_1 = (float) PIB_1 / População_1;
          float SuperPoder_1;


          char Estado_2[30] = "Acre";
          char Código_2[30] = "B02";
          char NomedaCidade_2[30] = "Rio Branco";
          unsigned long int População_2 = 830026;
          float Área_2 = 164123.00;
          float PIB_2 = 173300.00;
          int PontosTuristicos_2 = 8;
          float densidadepopulacional_2 = (float) População_2 / Área_2;
          float PIBpercapita_2 = (float) PIB_2 / População_2;
          float SuperPoder_2;

          printf("Estado:\n ");
          scanf("%s", Estado_1);

          printf("Código:\n ");
          scanf("%s", Código_1);

          printf("Nome Da Cidade:\n ");
          scanf("%s", NomedaCidade_1);

          printf("População:\n ");
          scanf("%lu", &População_1);

          printf("Area Total:\n ");
          scanf("%f", &Área_1);

          printf("PIB:\n ");
          scanf("%f", &PIB_1);

          printf("Numeros de Pontos Turisticos:\n ");
          scanf("%d", &PontosTuristicos_1);
           
          printf("Densidade populacional:\n ");
          printf("%.3fhab/km2\n", densidadepopulacional_1);

          printf("PIB per Capita\n ");
          printf("%freais\n\n", PIBpercapita_1);

          printf("CADASTRO DA CARTA 2\n");

          printf("Estado:\n ");
          scanf("%s", Estado_2);

          printf("Código:\n ");
          scanf("%s", Código_2);

          printf("Nome Da Cidade:\n ");
          scanf("%s", NomedaCidade_2);

          printf("População:\n ");
          scanf("%lu", &População_2);

          printf("Area Total:\n ");
          scanf("%f", &Área_2);

          printf("PIB:\n ");
          scanf("%f", &Área_2);

          printf("Numeros de Pontos Turisticos:\n ");
          scanf("%d", &PontosTuristicos_2);
           
          printf("densidade populacional:\n ");
          printf("%.3fhab/km2\n", densidadepopulacional_2);

          printf("PIB per Capita:\n ");
          printf("%freais\n\n", PIBpercapita_2);

          printf("DADOS DA CARTA 1\n");
          printf("Estado: %s - Código da Carta: %s\n", Estado_1, Código_1);
          printf("Nome Da Cidade: %s - População: %lu\n", NomedaCidade_1, População_1);
          printf("Área Total: %.3f - PIB: %.3f\n", Área_1, PIB_1);
          printf("Numeros de Pontos Turisticos: %d\n", PontosTuristicos_1);
          densidadepopulacional_1 = (float)(População_1 / Área_1);
          printf("Densidade populacional: %.3fhab/km2\n", densidadepopulacional_1);
          PIBpercapita_1 = (float)(PIB_1 / População_1);
          printf("PIB per capita: %freais\n", PIBpercapita_1);
          SuperPoder_1 =(float) População_1 + Área_1 + PIB_1 + PontosTuristicos_1 + densidadepopulacional_1 + PIBpercapita_1;
          printf("Super Poder carta 1: %f\n\n", SuperPoder_1);
          
          printf("DADOS DA CARTA 2\n");
          printf("Estado: %s - Código da Carta: %s\n", Estado_2, Código_2);
          printf("Nome Da cidade: %s - População: %lu\n", NomedaCidade_2, População_2);
          printf("Área Total: %.3f - PIB: %.3f\n", Área_2, PIB_2);
          printf("Numeros de Pontos Turisticos: %d\n", PontosTuristicos_2);
          densidadepopulacional_2 = (float)(População_2 / Área_2);
          printf("Densidade populacional: %.3fhab/km2\n", densidadepopulacional_2);
          PIBpercapita_2 = (float)(PIB_2 / População_2);
          printf("PIB per capita: %freais\n", PIBpercapita_2);
          SuperPoder_2 =(float) População_2 + Área_2 + PIB_2 + PontosTuristicos_2 + densidadepopulacional_2 + PIBpercapita_2;
          printf("Super Poder Carta 2: %f\n\n", SuperPoder_2);

          printf("Comparação das cartas\n ");
          printf("População_1 > População_2: %u\n", População_1 > População_2);
          printf("Área_1 > Área_2: %d\n", Área_1 > Área_2);
          printf("PIB_1 > PIB_2: %d\n", PIB_1 > PIB_2);
          printf("pontos tursiticos_1 > pontos turisticos_2: %d\n", PontosTuristicos_1 > PontosTuristicos_2);
          printf("desidade populacional_1 < densidade populacional_2: %d\n", densidadepopulacional_1 < densidadepopulacional_2);
          printf("pib per capita_1 > pib per capita_2: %d\n", PIBpercapita_1 > PIBpercapita_2);
          printf("Super Poder_1 > Super Poder_2: %d", SuperPoder_1 >SuperPoder_2);
      

        



          return 0;
        }

  