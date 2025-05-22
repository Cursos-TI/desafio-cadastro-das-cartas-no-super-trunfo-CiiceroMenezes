// Desafio Nivel Aventureiro
// Requisitos funcionais:
// 1 - Menu Interativo para que o jogador escolha qual atributo comparar
// 2 - Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador.
// 3 - Vence a carta com MAIOR valor no atributo escolhido.
// 4 - Para a Densidade Demográfica, a regra inverte: vence a carta com o MENOR valor.
// 5 - Exibir o resultado de forma clara contendo:
// O nome dos dois países, o atributo usado na comparação, os valores do atributo para cada carta, qual carta venceu e em caso de empate, exibir a mensagem "Empate!".

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct Carta
{ // struct da carta definido
    char pais[50];
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
    int opcao; // Variavel para salvar escolha do Player

    printf("### Super Trunfo em C ###\n"); // Apresentacao de inicio de game
    // Receber dados das cartas
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite o nome do País:\n");
    scanf("%s", &carta1.pais);

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
    printf("Digite o nome do País:\n");
    scanf("%s", &carta2.pais);

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

    // Implementando o Switch para criar o Menu Interativo

    printf("Escolha agora qual atributo deseja comparar:\n");
    printf("1. Nome do País\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    printf("Escolha: \n");

    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("O País da Carta 1 é: %s e o País da Carta 2 é: %s\n", carta1.pais, carta2.pais);
        break;
    case 2:
        printf("País da carta 1 é: %s e o País da carta 2 é: %s\n", carta1.pais, carta2.pais);
        printf("Você escolheu o atributo: População.\n");
        printf("A População da Carta 1 é: %d e a População da Carta 2 é: %d\n", carta1.populacao, carta2.populacao);
        if (carta1.populacao > carta2.populacao)
        {
            printf("A Carta 1 é a vencedora!\n");
        }
        else if (carta1.populacao == carta2.populacao)
        {
            printf("Que interessante, esse atributo terminou em EMPATE!\n");
        }
        else
        {
            printf("A Carta 2 é a vencedora!\n");
        }

        break;
    case 3:
        printf("País da carta 1 é: %s e o País da carta 2 é: %s\n", carta1.pais, carta2.pais);
        printf("Você escolheu o atributo: Área.\n");
        printf("A Área da Carta 1 é: %f e a Área da Carta 2 é: %f\n", carta1.area, carta2.area);
        if (carta1.area > carta2.area)
        {
            printf("A Carta 1 é a vencedora!\n");
        }
        else if (carta1.area == carta2.area)
        {
            printf("Que interessante, esse atributo terminou em EMPATE!\n");
        }
        else
        {
            printf("A Carta 2 é a vencedora!\n");
        }

        break;
    case 4:
        printf("País da carta 1 é: %s e o País da carta 2 é: %s\n", carta1.pais, carta2.pais);
        printf("Você escolheu o atributo: PIB.\n");
        printf("O PIB da Carta 1 é: %f e o PIB da Carta 2 é: %f\n", carta1.pib, carta2.pib);
        if (carta1.pib > carta2.pib)
        {
            printf("A Carta 1 é a vencedora!\n");
        }
        else if (carta1.pib == carta2.pib)
        {
            printf("Que interessante, esse atributo terminou em EMPATE!\n");
        }
        else
        {
            printf("A Carta 2 é a vencedora!\n");
        }

        break;
    case 5:
        printf("País da carta 1 é: %s e o País da carta 2 é: %s\n", carta1.pais, carta2.pais);
        printf("Você escolheu o atributo: Pontos Turísticos.\n");
        printf("A Carta 1 possui %d Pontos Turísticos, ja a Carta 2 possui %d\n", carta1.pontosTuristicos, carta2.pontosTuristicos);
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
        {
            printf("A Carta 1 é a vencedora!\n");
        }
        else if (carta1.pontosTuristicos == carta2.pontosTuristicos)
        {
            printf("Que interessante, esse atributo terminou em EMPATE!\n");
        }
        else
        {
            printf("A Carta 2 é a vencedora!\n");
        }

        break;
    case 6:
        printf("País da carta 1 é: %s e o País da carta 2 é: %s\n", carta1.pais, carta2.pais);
        printf("Você escolheu o atributo: Densidade Demográfica.\n");
        printf("A Carta 1 possui a Densidade Demográfica de %f, já a Carta 2 possui a Densidade Demográfica de %f\n", densidadePopulacionalC1, densidadePopulacionalC2);
        if (densidadePopulacionalC1 < densidadePopulacionalC2)
        {
            printf("A Carta 1 é a vencedora!\n");
        }
        else if (densidadePopulacionalC1 == densidadePopulacionalC2)
        {
            printf("Que interessante, esse atributo terminou em EMPATE!\n");
        }
        else
        {
            printf("A Carta 2 é a vencedora!\n");
        }

        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
}