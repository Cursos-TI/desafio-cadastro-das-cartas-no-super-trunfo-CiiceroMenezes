// Desafio Nível Mestre
// O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas.
// Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos.
// Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
// Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
// Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.

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

    // Inicio de escolha dos atributos
    int opcao1, opcao2;

    printf("Escolha agora quais atributos deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    // Primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    scanf("%d", &opcao1);

    // Verifica se opção é válida
    if (opcao1 < 1 || opcao1 > 5)
    {
        printf("Opção inválida!\n");
        return 1;
    }

    // Segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &opcao2);

    // Verifica se opção é válida e diferente da primeira
    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1)
    {
        printf("Opção inválida ou já escolhida!\n");
        return 1;
    }

    // Captura os valores dos atributos
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    for (int i = 1; i <= 2; i++)
    {
        int opcao = (i == 1) ? opcao1 : opcao2;

        float v_c1 = 0, v_c2 = 0;

        switch (opcao)
        {
        case 1:
            v_c1 = carta1.populacao;
            v_c2 = carta2.populacao;
            break;
        case 2:
            v_c1 = carta1.area;
            v_c2 = carta2.area;
            break;
        case 3:
            v_c1 = carta1.pib;
            v_c2 = carta2.pib;
            break;
        case 4:
            v_c1 = carta1.pontosTuristicos;
            v_c2 = carta2.pontosTuristicos;
            break;
        case 5:
            v_c1 = densidadePopulacionalC1;
            v_c2 = densidadePopulacionalC2;
            break;
        }

        if (i == 1)
        {
            valor1_carta1 = v_c1;
            valor1_carta2 = v_c2;
        }
        else
        {
            valor2_carta1 = v_c1;
            valor2_carta2 = v_c2;
        }
    }

    // Comparação dos atributos
    printf("\n### Comparação dos Atributos ###\n");

    printf("Atributo %d:\n", opcao1);
    printf("%s: %.2f x %s: %.2f\n", carta1.cidade, valor1_carta1, carta2.cidade, valor1_carta2);
    if (valor1_carta1 > valor1_carta2)
        printf("-> %s venceu no primeiro atributo!\n", carta1.cidade);
    else if (valor1_carta1 < valor1_carta2)
        printf("-> %s venceu no primeiro atributo!\n", carta2.cidade);
    else
        printf("-> Empate no primeiro atributo.\n");

    printf("\nAtributo %d:\n", opcao2);
    printf("%s: %.2f x %s: %.2f\n", carta1.cidade, valor2_carta1, carta2.cidade, valor2_carta2);
    if (valor2_carta1 > valor2_carta2)
        printf("-> %s venceu no segundo atributo!\n", carta1.cidade);
    else if (valor2_carta1 < valor2_carta2)
        printf("-> %s venceu no segundo atributo!\n", carta2.cidade);
    else
        printf("-> Empate no segundo atributo.\n");

    // Soma dos atributos
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n### Resultado Final ###\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", carta1.cidade, soma_carta1);
    printf("%s: %.2f\n", carta2.cidade, soma_carta2);

    if (soma_carta1 > soma_carta2)
        printf("🏆 %s venceu no total!\n", carta1.cidade);
    else if (soma_carta1 < soma_carta2)
        printf("🏆 %s venceu no total!\n", carta2.cidade);
    else
        printf("⚖️ Empate no total!\n");

    return 0;
}
