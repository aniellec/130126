//Anielle Casagrande

#include <stdio.h>

int main() {
    char carta1_codigo[10];
    char carta1_estado[10];
    char carta1_nome[20];
    unsigned long int carta1_num;
    float carta1_area;
    float carta1_pib;
    int carta1_pontos;
    char carta2_codigo[10];
    char carta2_estado[10];

    char carta2_nome[20];
    unsigned long int carta2_num;
    float carta2_area;
    float carta2_pib;
    int carta2_pontos;

    float carta1_densidade;
    float carta1_pibpc;
    float carta2_densidade;
    float carta2_pibpc;

    float carta1_poder;
    float carta2_poder;

    printf ("---CARTA 1---\n");
    printf ("Estado:");
    scanf ("%9s", carta1_estado);
    printf ("Codigo:");
    scanf ("%9s", carta1_codigo);
    printf ("Nome:");
    scanf("%19s", carta1_nome);
    printf ("Populacao:");
    scanf ("%lu", &carta1_num);
    printf ("Area:");
    scanf ("%f", &carta1_area);
    printf ("PIB:");
    scanf ("%f", &carta1_pib);
    printf ("Pontos turisticos:");
    scanf ("%d", &carta1_pontos);

    printf("Carta 1:\n");
    printf("Codigo: %s\n", carta1_codigo);
    printf("Nome: %s\n", carta1_nome);
    printf("Populacao: %lu\n", carta1_num);
    printf("Area: %f\n", carta1_area);
    printf("PIB: %f\n", carta1_pib);
    printf("Pontos turisticos: %d\n", carta1_pontos);

    carta1_densidade = (float)carta1_num / carta1_area;
    carta1_pibpc = carta1_pib / carta1_num;

    carta1_poder =
    (float)carta1_num +
    carta1_area +
    carta1_pib +
    (float)carta1_pontos +
    carta1_pibpc +
    (carta1_area / (float)carta1_num);

    printf("Densidade: %.2f\n", carta1_densidade);
    printf("PIB Per Capita: %.2f\n", carta1_pibpc);
    printf("Poder total: %.2f\n", carta1_poder);

 
    printf ("\n---CARTA 2---\n");
    printf ("Estado:");
    scanf ("%9s", carta2_estado);
    printf ("Codigo:");
    scanf ("%9s", carta2_codigo);
    printf ("Nome:");
    scanf("%19s", carta2_nome);
    printf ("Populacao:");
    scanf ("%lu", &carta2_num);
    printf ("Area:");
    scanf ("%f", &carta2_area);
    printf ("PIB:");
    scanf ("%f", &carta2_pib);
    printf ("Pontos turisticos:");
    scanf ("%d", &carta2_pontos);

    printf("Carta 2:\n");
    printf("Codigo: %s\n", carta2_codigo);
    printf("Nome: %s\n", carta2_nome);
    printf("Populacao: %lu\n", carta2_num);
    printf("Area: %f\n", carta2_area);
    printf("PIB: %f\n", carta2_pib);
    printf("Pontos turisticos: %d\n", carta2_pontos);

    carta2_densidade = (float)carta2_num / carta2_area;
    carta2_pibpc = carta2_pib / carta2_num;

    carta2_poder =
    (float)carta2_num +
    carta2_area +
    carta2_pib +
    (float)carta2_pontos +
    carta2_pibpc +
    (carta2_area / (float)carta2_num);

    printf("Densidade: %.2f\n", carta2_densidade);
    printf("PIB Per Capita: %.2f\n", carta2_pibpc);
    printf("Poder total: %.2f\n\n", carta2_poder);


    ////

    int vencedor_populacao;
    int vencedor_area;
    int vencedor_pib;
    int vencedor_pontos;
    int vencedor_pibpc;
    int vencedor_densidade;
    int vencedor_superpoder;

    vencedor_populacao = carta1_num > carta2_num;
    vencedor_area = carta1_area > carta2_area;
    vencedor_pib = carta1_pib > carta2_pib;
    vencedor_pontos = carta1_pontos > carta2_pontos;
    vencedor_pibpc = carta1_pibpc > carta2_pibpc;
    vencedor_densidade = carta1_densidade < carta2_densidade;
    vencedor_superpoder = carta1_poder > carta2_poder;


    printf("Populacao (1=Carta1 vence, 0=Carta2 vence): %d\n", vencedor_populacao);
    printf("Area (1=Carta1 vence, 0=Carta2 vence): %d\n", vencedor_area);
    printf("PIB (1=Carta1 vence, 0=Carta2 vence): %d\n", vencedor_pib);
    printf("Pontos Turisticos (1=Carta1 vence, 0=Carta2 vence): %d\n", vencedor_pontos);
    printf("PIB per Capita (1=Carta1 vence, 0=Carta2 vence): %d\n", vencedor_pibpc);
    printf("Densidade Populacional (1=Carta1 vence, 0=Carta2 vence): %d\n", vencedor_densidade);
    printf("Super Poder (1=Carta1 vence, 0=Carta2 vence): %d\n", vencedor_superpoder);


    //////


    int opcao = 0;
    int opcao2 = 0;
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    printf("Escolha uma opção:\n");
    printf("1. Nome (exibir informações)\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n--- CARTA 1 ---\n");
            printf("%s (%s)\n", carta1_nome, carta1_estado);
            printf("População: %lu\n", carta1_num);
            printf("Área: %.2f\n", carta1_area);
            printf("PIB: %.2f\n", carta1_pib);
            printf("Pontos turísticos: %d\n", carta1_pontos);

            printf("\n--- CARTA 2 ---\n");
            printf("%s (%s)\n", carta2_nome, carta2_estado);
            printf("População: %lu\n", carta2_num);
            printf("Área: %.2f\n", carta2_area);
            printf("PIB: %.2f\n", carta2_pib);
            printf("Pontos turísticos: %d\n", carta2_pontos);
            
        break;
        case 2:
            printf("\nComparacao de cartas (Atributo: Populacao):\n\n");
            printf("Carta 1 - %s (%s): %lu\n", carta1_nome, carta1_estado, carta1_num);
            printf("Carta 2 - %s (%s): %lu\n", carta2_nome, carta2_estado, carta2_num);

            if (vencedor_populacao){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 3:
            printf("\nComparacao de cartas (Atributo: Area):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", carta1_nome, carta1_estado, carta1_area);
            printf("Carta 2 - %s (%s): %.2f\n", carta2_nome, carta2_estado, carta2_area);

            if (vencedor_area){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 4:
            printf("\nComparacao de cartas (Atributo: PIB):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", carta1_nome, carta1_estado, carta1_pib);
            printf("Carta 2 - %s (%s): %.2f\n", carta2_nome, carta2_estado, carta2_pib);

            if (vencedor_pib){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 5:
            printf("\nComparacao de cartas (Atributo: Pontos Turisticos):\n\n");
            printf("Carta 1 - %s (%s): %d\n", carta1_nome, carta1_estado, carta1_pontos);
            printf("Carta 2 - %s (%s): %d\n", carta2_nome, carta2_estado, carta2_pontos);

            if (vencedor_pontos){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 6:
            printf("\nComparacao de cartas (Atributo: Densidade Demografica):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", carta1_nome, carta1_estado, carta1_densidade);
            printf("Carta 2 - %s (%s): %.2f\n", carta2_nome, carta2_estado, carta2_densidade);

            if (vencedor_densidade){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        default:
            printf("Opção inválida\n");
  }

  do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. PIB per Capita\n");
        printf("6. Densidade Demografica\n");
        printf("7. Super Poder\n");
        scanf("%d", &opcao2);

        if (opcao2 == opcao) {
            printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        }

    } while (opcao2 == opcao);

   switch (opcao2) {
        case 1:
            printf("\n--- CARTA 1 ---\n");
            printf("%s (%s)\n", carta1_nome, carta1_estado);
            printf("População: %lu\n", carta1_num);
            printf("Área: %.2f\n", carta1_area);
            printf("PIB: %.2f\n", carta1_pib);
            printf("Pontos turísticos: %d\n", carta1_pontos);

            printf("\n--- CARTA 2 ---\n");
            printf("%s (%s)\n", carta2_nome, carta2_estado);
            printf("População: %lu\n", carta2_num);
            printf("Área: %.2f\n", carta2_area);
            printf("PIB: %.2f\n", carta2_pib);
            printf("Pontos turísticos: %d\n", carta2_pontos);
            
        break;
        case 2:
            printf("\nComparacao de cartas (Atributo: Populacao):\n\n");
            printf("Carta 1 - %s (%s): %lu\n", carta1_nome, carta1_estado, carta1_num);
            printf("Carta 2 - %s (%s): %lu\n", carta2_nome, carta2_estado, carta2_num);

            if (vencedor_populacao){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 3:
            printf("\nComparacao de cartas (Atributo: Area):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", carta1_nome, carta1_estado, carta1_area);
            printf("Carta 2 - %s (%s): %.2f\n", carta2_nome, carta2_estado, carta2_area);

            if (vencedor_area){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 4:
            printf("\nComparacao de cartas (Atributo: PIB):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", carta1_nome, carta1_estado, carta1_pib);
            printf("Carta 2 - %s (%s): %.2f\n", carta2_nome, carta2_estado, carta2_pib);

            if (vencedor_pib){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 5:
            printf("\nComparacao de cartas (Atributo: Pontos Turisticos):\n\n");
            printf("Carta 1 - %s (%s): %d\n", carta1_nome, carta1_estado, carta1_pontos);
            printf("Carta 2 - %s (%s): %d\n", carta2_nome, carta2_estado, carta2_pontos);

            if (vencedor_pontos){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        case 6:
            printf("\nComparacao de cartas (Atributo: Densidade Demografica):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", carta1_nome, carta1_estado, carta1_densidade);
            printf("Carta 2 - %s (%s): %.2f\n", carta2_nome, carta2_estado, carta2_densidade);

            if (vencedor_densidade){
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1_nome);
                pontos_carta1++;
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2_nome);
                pontos_carta2++;
            }
        break;
        default:
            printf("Opção inválida\n");
  }

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Carta 1 (%s): %d pontos\n", carta1_nome, pontos_carta1);
    printf("Carta 2 (%s): %d pontos\n", carta2_nome, pontos_carta2);

    if (pontos_carta1 > pontos_carta2)
        printf("VENCEDOR FINAL: Carta 1 (%s)\n", carta1_nome);
    else if (pontos_carta2 > pontos_carta1)
        printf("VENCEDOR FINAL: Carta 2 (%s)\n", carta2_nome);
    else
        printf("EMPATE!\n");
    

    return 0;
}
