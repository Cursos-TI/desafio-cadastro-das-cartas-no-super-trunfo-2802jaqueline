#include <stdio.h>
int main(){
printf("Desafio Cartas Super Trunfo:\n");
printf("Novo Commit:\n");
printf("Carta02\n");

char Estado[20] = "Acre";
char Código[20] = "B02";
char Nomedacidade[20] = "RioBranco";
int População = 830026;
float Área = 164.123;
float PIB = 17.300;
int Pontosturisticos = 8;

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

printf("Numero de pontos turisticos:\n");
scanf("%d", &Pontosturisticos);

printf("Estado: %s - Código: %s\n", Estado, Código);
printf("Nome da cidade: %s - População: %d\n", Nomedacidade, População);
printf("Área: %.3f - PIB: %.3f - Numeros Pontos turisticos: %d\n", Área, PIB, Pontosturisticos);



return 0;

}