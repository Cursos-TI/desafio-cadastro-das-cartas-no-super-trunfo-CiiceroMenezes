#include <stdio.h>


int main() {
    printf("Super Trunfo em C - Tema: Países - Cadastro de Cartas.\n");
    
    char Paises[20];
    char EstadoA[20];
    char EstadoB[20];
    char EstadoC[20];
    char EstadoD[20];
    char EstadoE[20];
    char EstadoF[20];
    char EstadoG[20];
    char EstadoH[20];
    char CidadeA01[20];
    char CidadeA02[20];
    char CidadeA03[20];
    char CidadeA04[20];
    char CidadeB01[20];
    char CidadeB02[20];
    char CidadeB03[20];
    char CidadeB04[20];
    char CidadeC01[20];
    char CidadeC02[20];
    char CidadeC03[20];
    char CidadeC04[20];
    char CidadeD01[20];
    char CidadeD02[20];
    char CidadeD03[20];
    char CidadeD04[20];
    char CidadeE01[20];
    char CidadeE02[20];
    char CidadeE03[20];
    char CidadeE04[20];
    char CidadeF01[20];
    char CidadeF02[20];
    char CidadeF03[20];
    char CidadeF04[20];
    char CidadeG01[20];
    char CidadeG02[20];
    char CidadeG03[20];
    char CidadeG04[20];
    char CidadeH01[20];
    char CidadeH02[20];
    char CidadeH03[20];
    char CidadeH04[20];
    float PopulacaoA01;
    float PopulacaoA02;
    float PopulacaoA03;
    float PopulacaoA04;
    float PopulacaoB01;
    float PopulacaoB02;
    float PopulacaoB03;
    float PopulacaoB04;
    float PopulacaoC01;
    float PopulacaoC02;
    float PopulacaoC03;
    float PopulacaoC04;
    float PopulacaoD01;
    float PopulacaoD02;
    float PopulacaoD03;
    float PopulacaoD04;
    float PopulacaoE01;
    float PopulacaoE02;
    float PopulacaoE03;
    float PopulacaoE04;
    float PopulacaoF01;
    float PopulacaoF02;
    float PopulacaoF03;
    float PopulacaoF04;
    float PopulacaoG01;
    float PopulacaoG02;
    float PopulacaoG03;
    float PopulacaoG04;
    float PopulacaoH01;
    float PopulacaoH02;
    float PopulacaoH03;
    float PopulacaoH04;
    float AreaA01;
    float AreaA02;
    float AreaA03;
    float AreaA04;
    float AreaB01;
    float AreaB02;
    float AreaB03;
    float AreaB04;
    float AreaC01;
    float AreaC02;
    float AreaC03;
    float AreaC04;
    float AreaD01;
    float AreaD02;
    float AreaD03;
    float AreaD04;
    float AreaE01;
    float AreaE02;
    float AreaE03;
    float AreaE04;
    float AreaF01;
    float AreaF02;
    float AreaF03;
    float AreaF04;
    float AreaG01;
    float AreaG02;
    float AreaG03;
    float AreaG04;
    float AreaH01;
    float AreaH02;
    float AreaH03;
    float AreaH04;
    float PibA01;
    float PibA02;
    float PibA03;
    float PibA04;
    float PibB01;
    float PibB02;
    float PibB03;
    float PibB04;
    float PibC01;
    float PibC02;
    float PibC03;
    float PibC04;
    float PibD01;
    float PibD02;
    float PibD03;
    float PibD04;
    float PibE01;
    float PibE02;
    float PibE03;
    float PibE04;
    float PibF01;
    float PibF02;
    float PibF03;
    float PibF04;
    float PibG01;
    float PibG02;
    float PibG03;
    float PibG04;
    float PibH01;
    float PibH02;
    float PibH03;
    float PibH04;
    int PontosTuristicosA01;
    int PontosTuristicosA02;
    int PontosTuristicosA03;
    int PontosTuristicosA04;
    int PontosTuristicosB01;
    int PontosTuristicosB02;
    int PontosTuristicosB03;
    int PontosTuristicosB04;
    int PontosTuristicosC01;
    int PontosTuristicosC02;
    int PontosTuristicosC03;
    int PontosTuristicosC04;
    int PontosTuristicosD01;
    int PontosTuristicosD02;
    int PontosTuristicosD03;
    int PontosTuristicosD04;
    int PontosTuristicosE01;
    int PontosTuristicosE02;
    int PontosTuristicosE03;
    int PontosTuristicosE04;
    int PontosTuristicosF01;
    int PontosTuristicosF02;
    int PontosTuristicosF03;
    int PontosTuristicosF04;
    int PontosTuristicosG01;
    int PontosTuristicosG02;
    int PontosTuristicosG03;
    int PontosTuristicosG04;
    int PontosTuristicosH01;
    int PontosTuristicosH02;
    int PontosTuristicosH03;
    int PontosTuristicosH04;


    printf("Já sabe qual seu País?! Ótimo, então me diga:\n");
    scanf("%s", &Paises);
    printf("Digite o primeiro Estado: \n");
    scanf("%s", &EstadoA);
    printf("Digite a primeira Cidade: \n");
    scanf("%s", &CidadeA01);
    printf("Qual a População da Cidade escolhida?: \n");
    scanf("%f", &PopulacaoA01);
    printf("Qual a Área da Cidade escolhida?: \n");
    scanf("%f", &AreaA01);
    printf("Qual o Pib da Cidade escolhida?: \n");
    scanf("%f", &PibA01);
    printf(  "Quantos Pontos Turísticos a Cidade tem?: \n");
    scanf("%d", &PontosTuristicosA01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoA);
      printf("Cidade: %s\n", CidadeA01);
      printf("Sua população é: %f\n", PopulacaoA01);
      printf("Sua área é: %f\n", AreaA01);
      printf("Possui um PIB de: %f\n", PibA01);
      printf("Existe um total de: %d Pontos Turísticos.\n", PontosTuristicosA01);

    printf("Sobre a próxima Cidade, me diga. Qual seria?:\n");
    scanf("%s", &CidadeA02);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoA02);
    printf("Diga qual sua Área total?:\n");
    scanf("%f", &AreaA02);
    printf("Agora digite seu Pib:\n");
    scanf("%f", &PibA02);
    printf(  "Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosA02);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoA);
      printf("Cidade: %s\n", CidadeA02);
      printf("Sua População é: %f\n", PopulacaoA02);
      printf("Sua área é: %f\n", AreaA02);
      printf("Possui um Pib de: %f\n", PibA02);
      printf("Existe um total de: %d Pontos Turísticos.\n", PontosTuristicosA02);

    printf("Me diga o nome da terceira Cidade:\n");
    scanf("%s", &CidadeA03);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoA03);
    printf("Diga qual sua Área total:\n");
    scanf("%f", &AreaA03);
    printf("Agora diga seu Pib:\n");
    scanf("%f", &PibA03);
    printf(  "Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosA03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoA);
      printf("Cidade: %s\n", CidadeA03);
      printf("Sua População é: %f\n", PopulacaoA03);
      printf("Sua área é: %f\n", AreaA03);
      printf("Possui um Pib de: %f\n", PibA03);
      printf("Existe um total de: %d Pontos Turísticos.\n", PontosTuristicosA03);

    printf( "Qual a quarta Cidade?:\n");
    scanf("%s", &CidadeA04);
    printf( "Qual sua População?:\n");
    scanf("%f", &PopulacaoA04);
    printf( "Qual sua Área total?:\n");
    scanf( "%f", &AreaA04);
    printf( "Agora informe seu Pib:\n");
    scanf( "%f", &PibA04);
    printf(  "Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosA04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoA);
      printf("Cidade: %s\n", CidadeA04);
      printf("Sua População é: %f\n", PopulacaoA04);
      printf("Sua área é: %f\n", AreaA04);
      printf("Possui um Pib de: %f\n", PibA04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosA04);

    printf("Qual o próximo Estado?:\n");
    scanf("%s", &EstadoB);
    printf("Qual o nome da Cidade?:\n");
    scanf("%s", &CidadeB01);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoB01);
    printf("Qual sua Área total?:\n");
    scanf("%f", &AreaB01);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibB01);
    printf("  Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosB01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoB);
      printf("Cidade: %s\n", CidadeB01);
      printf("Sua População é: %f\n", PopulacaoB01);
      printf("Sua área é: %f\n", AreaB01);
      printf("Possui um Pib de: %f\n", PibB01);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosB01);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeB02);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoB02);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaB02);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibB02);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosB02);
      
      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoB);
      printf("Cidade: %s\n", CidadeB02);
      printf("Sua População é: %f\n", PopulacaoB02);
      printf("Sua área é: %f\n", AreaB02);
      printf("Possui um Pib de: %f\n", PibB02);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosB02);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeB03);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoB03);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaB03);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibB03);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosB03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoB);
      printf("Cidade: %s\n", CidadeB03);
      printf("Sua População é: %f\n", PopulacaoB03);
      printf("Sua área é: %f\n", AreaB03);
      printf("Possui um Pib de: %f\n", PibB03);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosB03);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeB04);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoB04);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaB04);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibB04);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosB04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoB);
      printf("Cidade: %s\n", CidadeB04);
      printf("Sua População é: %f\n", PopulacaoB04);
      printf("Sua área é: %f\n", AreaB04);
      printf("Possui um Pib de: %f\n", PibB04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosB04);

    printf("Qual o próximo Estado?:\n");
    scanf("%s", &EstadoC);
    printf("Qual o nome da Cidade?:\n");
    scanf("%s", &CidadeC01);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoC01);
    printf("Qual sua Área total?:\n");
    scanf("%f", &AreaC01);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibC01);
    printf("  Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosC01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoC);
      printf("Cidade: %s\n", CidadeC01);
      printf("Sua População é: %f\n", PopulacaoC01);
      printf("Sua área é: %f\n", AreaC01);
      printf("Possui um Pib de: %f\n", PibC01);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosC01);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeC02);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoC02);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaC02);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibC02);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosC02);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoC);
      printf("Cidade: %s\n", CidadeC02);
      printf("Sua População é: %f\n", PopulacaoC02);
      printf("Sua área é: %f\n", AreaC02);
      printf("Possui um Pib de: %f\n", PibC02);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosC02);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeC03);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoC03);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaC03);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibC03);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosC03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoC);
      printf("Cidade: %s\n", CidadeC03);
      printf("Sua População é: %f\n", PopulacaoC03);
      printf("Sua área é: %f\n", AreaC03);
      printf("Possui um Pib de: %f\n", PibC03);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosC03);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeC04);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoC04);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaC04);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibC04);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosC04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoC);
      printf("Cidade: %s\n", CidadeC04);
      printf("Sua População é: %f\n", PopulacaoC04);
      printf("Sua área é: %f\n", AreaC04);
      printf("Possui um Pib de: %f\n", PibC04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosC04);

    printf("Qual o próximo Estado?:\n");
    scanf("%s", &EstadoD);
    printf("Qual o nome da Cidade?:\n");
    scanf("%s", &CidadeD01);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoD01);
    printf("Qual sua Área total?:\n");
    scanf("%f", &AreaD01);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibD01);
    printf("  Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosD01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoD);
      printf("Cidade: %s\n", CidadeD01);
      printf("Sua População é: %f\n", PopulacaoD01);
      printf("Sua área é: %f\n", AreaD01);
      printf("Possui um Pib de: %f\n", PibD01);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosD01);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeD02);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoD02);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaD02);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibD02);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosD02);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoD);
      printf("Cidade: %s\n", CidadeD02);
      printf("Sua População é: %f\n", PopulacaoD02);
      printf("Sua área é: %f\n", AreaD02);
      printf("Possui um Pib de: %f\n", PibD02);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosD02);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeD03);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoD03);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaD03);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibD03);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosD03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoD);
      printf("Cidade: %s\n", CidadeD03);
      printf("Sua População é: %f\n", PopulacaoD03);
      printf("Sua área é: %f\n", AreaD03);
      printf("Possui um Pib de: %f\n", PibD03);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosD03);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeD04);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoD04);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaD04);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibD04);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosD04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoD);
      printf("Cidade: %s\n", CidadeD04);
      printf("Sua População é: %f\n", PopulacaoD04);
      printf("Sua área é: %f\n", AreaD04);
      printf("Possui um Pib de: %f\n", PibD04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosD04);

    printf("Qual o próximo Estado?:\n");
    scanf("%s", &EstadoE);
    printf("Qual o nome da Cidade?:\n");
    scanf("%s", &CidadeE01);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoE01);
    printf("Qual sua Área total?:\n");
    scanf("%f", &AreaE01);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibE01);
    printf("  Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosE01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoE);
      printf("Cidade: %s\n", CidadeE01);
      printf("Sua População é: %f\n", PopulacaoE01);
      printf("Sua área é: %f\n", AreaE01);
      printf("Possui um Pib de: %f\n", PibE01);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosE01);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeE02);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoE02);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaE02);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibE02);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosE02);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoE);
      printf("Cidade: %s\n", CidadeE02);
      printf("Sua População é: %f\n", PopulacaoE02);
      printf("Sua área é: %f\n", AreaE02);
      printf("Possui um Pib de: %f\n", PibE02);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosE02);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeE03);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoE03);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaE03);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibE03);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosE03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoE);
      printf("Cidade: %s\n", CidadeE03);
      printf("Sua População é: %f\n", PopulacaoE03);
      printf("Sua área é: %f\n", AreaE03);
      printf("Possui um Pib de: %f\n", PibE03);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosE03);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeE04);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoE04);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaE04);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibE04);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosE04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoE);
      printf("Cidade: %s\n", CidadeE04);
      printf("Sua População é: %f\n", PopulacaoE04);
      printf("Sua área é: %f\n", AreaE04);
      printf("Possui um Pib de: %f\n", PibE04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosE04);

    printf("Qual o próximo Estado?:\n");
    scanf("%s", &EstadoF);
    printf("Qual o nome da Cidade?:\n");
    scanf("%s", &CidadeF01);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoF01);
    printf("Qual sua Área total?:\n");
    scanf("%f", &AreaF01);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibF01);
    printf("  Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosF01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoF);
      printf("Cidade: %s\n", CidadeF01);
      printf("Sua População é: %f\n", PopulacaoF01);
      printf("Sua área é: %f\n", AreaF01);
      printf("Possui um Pib de: %f\n", PibF01);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosF01);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeF02);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoF02);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaF02);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibF02);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosF02);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoF);
      printf("Cidade: %s\n", CidadeF02);
      printf("Sua População é: %f\n", PopulacaoF02);
      printf("Sua área é: %f\n", AreaF02);
      printf("Possui um Pib de: %f\n", PibF02);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosF02);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeF03);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoF03);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaF03);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibF03);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosF03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoF);
      printf("Cidade: %s\n", CidadeF03);
      printf("Sua População é: %f\n", PopulacaoF03);
      printf("Sua área é: %f\n", AreaF03);
      printf("Possui um Pib de: %f\n", PibF03);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosF03);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeF04);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoF04);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaF04);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibF04);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosF04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoF);
      printf("Cidade: %s\n", CidadeF04);
      printf("Sua População é: %f\n", PopulacaoF04);
      printf("Sua área é: %f\n", AreaF04);
      printf("Possui um Pib de: %f\n", PibF04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosF04);

    printf("Qual o próximo Estado?:\n");
    scanf("%s", &EstadoG);
    printf("Qual o nome da Cidade?:\n");
    scanf("%s", &CidadeG01);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoG01);
    printf("Qual sua Área total?:\n");
    scanf("%f", &AreaG01);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibG01);
    printf("  Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosG01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoG);
      printf("Cidade: %s\n", CidadeG01);
      printf("Sua População é: %f\n", PopulacaoG01);
      printf("Sua área é: %f\n", AreaG01);
      printf("Possui um Pib de: %f\n", PibG01);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosG01);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeG02);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoG02);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaG02);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibG02);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosG02);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoG);
      printf("Cidade: %s\n", CidadeG02);
      printf("Sua População é: %f\n", PopulacaoG02);
      printf("Sua área é: %f\n", AreaG02);
      printf("Possui um Pib de: %f\n", PibG02);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosG02);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeG03);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoG03);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaG03);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibG03);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosG03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoG);
      printf("Cidade: %s\n", CidadeG03);
      printf("Sua População é: %f\n", PopulacaoG03);
      printf("Sua área é: %f\n", AreaG03);
      printf("Possui um Pib de: %f\n", PibG03);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosG03);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeG04);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoG04);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaG04);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibG04);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosG04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoG);
      printf("Cidade: %s\n", CidadeG04);
      printf("Sua População é: %f\n", PopulacaoG04);
      printf("Sua área é: %f\n", AreaG04);
      printf("Possui um Pib de: %f\n", PibG04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosG04);

    printf("Qual o próximo Estado?:\n");
    scanf("%s", &EstadoH);
    printf("Qual o nome da Cidade?:\n");
    scanf("%s", &CidadeH01);
    printf("Qual sua População?:\n");
    scanf("%f", &PopulacaoH01);
    printf("Qual sua Área total?:\n");
    scanf("%f", &AreaH01);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibH01);
    printf("  Quantos Pontos Turísticos ela possui?:\n");
    scanf("%d", &PontosTuristicosH01);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoH);
      printf("Cidade: %s\n", CidadeH01);
      printf("Sua População é: %f\n", PopulacaoH01);
      printf("Sua área é: %f\n", AreaH01);
      printf("Possui um Pib de: %f\n", PibH01);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosH01);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeH02);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoH02);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaH02);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibH02);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosH02);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoH);
      printf("Cidade: %s\n", CidadeH02);
      printf("Sua População é: %f\n", PopulacaoH02);
      printf("Sua área é: %f\n", AreaH02);
      printf("Possui um Pib de: %f\n", PibH02);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosH02);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeH03);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoH03);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaH03);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibH03);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosH03);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoH);
      printf("Cidade: %s\n", CidadeH03);
      printf("Sua População é: %f\n", PopulacaoH03);
      printf("Sua área é: %f\n", AreaH03);
      printf("Possui um Pib de: %f\n", PibH03);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosH03);

    printf("Qual a próxima Cidade?\n");
    scanf("%s", &CidadeH04);
    printf("Qual sua População?\n");
    scanf("%f", &PopulacaoH04);
    printf("Qual sua Área total?\n");
    scanf("%f", &AreaH04);
    printf("Agora informe seu Pib:\n");
    scanf("%f", &PibH04);
    printf(" Quantos Pontos Turísticos ela possui?\n");
    scanf("%d", &PontosTuristicosH04);

      printf("Seu País é: %s\n", Paises);
      printf("Estado: %s\n", EstadoH);
      printf("Cidade: %s\n", CidadeH04);
      printf("Sua População é: %f\n", PopulacaoH04);
      printf("Sua área é: %f\n", AreaH04);
      printf("Possui um Pib de: %f\n", PibH04);
      printf("Possui um total de %d Pontos Turísticos\n", PontosTuristicosH04);


    printf("Obrigado por essas informações. Suas cartas estão sensacionais!\n");





    return 0;
}
