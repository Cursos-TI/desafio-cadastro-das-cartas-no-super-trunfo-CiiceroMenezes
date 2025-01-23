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
      













    





    
    




    return 0;
}
