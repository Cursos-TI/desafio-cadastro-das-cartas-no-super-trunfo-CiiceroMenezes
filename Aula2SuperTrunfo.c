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
    // Recebeu os dados da Primeira Carta

    // Inicio do calculo de Densidade Populacional e PIB per capita - Carta 1
    float densidadePopulacionalC1 = carta1.populacao / carta1.area;
    printf("A Densidade Populacional é: %.2f hab/km²\n", densidadePopulacionalC1);
    float pibPerCapitaC1 = carta1.pib / carta1.populacao;
    printf("O PIB per capita é: %.3f\n", pibPerCapitaC1);

    // Inicio do cadastro da Segunda Carta

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
    // Recebeu dados da Segunda Carta

    // Inicio do calculo de Densidade Populacional e PIB per capita - Carta 1
    float densidadePopulacionalC2 = carta2.populacao / carta2.area;
    printf("A Densidade Populacional é: %.2f hab/km²\n", densidadePopulacionalC2);
    float pibPerCapitaC2 = carta2.pib / carta2.populacao;
    printf("O PIB per capita é: %.3f\n", pibPerCapitaC2);

    // Mensagem para iniciar o resultado
    printf("E o vencedor do atributo POPULAÇÃO É:\n");

    // Comparando um Atributo pelo próprio código. O escolhido foi: POPULAÇÃO
    printf("Carta 1 %s (%s): %d\n", carta1.cidade, carta1.codigo, carta1.populacao);
    printf("Carta 2 %s (%s): %d\n", carta2.cidade, carta2.codigo, carta2.populacao);

    if (carta1.populacao > carta2.populacao)
    {
        printf("A Carta 1 (%s) venceu!\n", carta1.estado);
    }
    else
    {
        printf("A Carta 2 (%s) venceu!\n", carta2.estado);
    }
}