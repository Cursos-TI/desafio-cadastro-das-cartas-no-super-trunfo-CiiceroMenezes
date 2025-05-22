#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct Carta
{ // struct da carta definido
    char estado[50];
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};
int main()
{
    // Desafio aula 2 - comparando duas cartas
    struct Carta carta1, carta2;

    printf("### Super Trunfo em C ###\n"); // Apresentacao de inicio de game
    // Receber dados das cartas
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite o Estado:\n");
    scanf("%s", &carta1.estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &carta1.codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &carta1.cidade);

    printf("Digite a População:\n");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area:\n");
    scanf("%f", &carta1.area);

    printf("Digite o Pib:\n");
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &carta1.pontosTuristicos);
    
    //Recebeu os dados da Primeira Carta
    //Inicio do cadastro da Segunda Carta

     printf("Cadastro da Segunda Carta:\n");
    printf("Digite o Estado:\n");
    scanf("%s", &carta2.estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &carta2.codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &carta2.cidade);

    printf("Digite a População:\n");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area:\n");
    scanf("%f", &carta2.area);

    printf("Digite o Pib:\n");
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &carta2.pontosTuristicos);
    //Recebeu dados da Segunda Carta
}