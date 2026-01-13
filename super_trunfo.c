//Anielle Casagrande

#include <stdio.h>

int main() {
    int carta1_codigo;
    char carta1_nome[20];
    unsigned long int carta1_num;
    float carta1_area;
    float carta1_pib;
    int carta1_pontos;
    int carta2_codigo;
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
    printf ("Codigo:");
    scanf ("%d", &carta1_codigo);
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
    printf("Codigo: %d\n", carta1_codigo);
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
    printf ("Codigo:");
    scanf ("%d", &carta2_codigo);
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
    printf("Codigo: %d\n", carta2_codigo);
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


    return 0;
}
