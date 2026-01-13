//Anielle Casagrande

#include <stdio.h>

int main() {
    int carta1_codigo;
    char carta1_nome[20];
    int carta1_num;
    float carta1_area;
    float carta1_pib;
    int carta1_pontos;
    int carta2_codigo;
    char carta2_nome[20];
    int carta2_num;
    float carta2_area;
    float carta2_pib;
    int carta2_pontos;

    float carta1_densidade;
    float carta1_pibpc;
    float carta2_densidade;
    float carta2_pibpc;

    printf ("---CARTA 1---\n");
    printf ("Codigo:");
    scanf ("%d", &carta1_codigo);
    printf ("Nome:");
    scanf("%19s", carta1_nome);
    printf ("Populacao:");
    scanf ("%d", &carta1_num);
    printf ("Area:");
    scanf ("%f", &carta1_area);
    printf ("PIB:");
    scanf ("%f", &carta1_pib);
    printf ("Pontos turisticos:");
    scanf ("%d", &carta1_pontos);

    printf("Carta 1:\n");
    printf("Codigo: %d\n", carta1_codigo);
    printf("Nome: %s\n", carta1_nome);
    printf("Populacao: %d\n", carta1_num);
    printf("Area: %f\n", carta1_area);
    printf("PIB: %f\n", carta1_pib);
    printf("Pontos turisticos: %d\n", carta1_pontos);

    carta1_densidade = carta1_num / carta1_area;
    carta1_pibpc = carta1_pib / carta1_num;

    printf("Densidade: %.2f\n", carta1_densidade);
    printf("PIB Per Capita: %.2f\n", carta1_pibpc);

 
    printf ("\n---CARTA 2---\n");
    printf ("Codigo:");
    scanf ("%d", &carta2_codigo);
    printf ("Nome:");
    scanf("%19s", carta2_nome);
    printf ("Populacao:");
    scanf ("%d", &carta2_num);
    printf ("Area:");
    scanf ("%f", &carta2_area);
    printf ("PIB:");
    scanf ("%f", &carta2_pib);
    printf ("Pontos turisticos:");
    scanf ("%d", &carta2_pontos);

    carta2_densidade = carta2_num / carta2_area;
    carta2_pibpc = carta2_pib / carta2_num;

    printf("Carta 2:\n");
    printf("Codigo: %d\n", carta2_codigo);
    printf("Nome: %s\n", carta2_nome);
    printf("Populacao: %d\n", carta2_num);
    printf("Area: %f\n", carta2_area);
    printf("PIB: %f\n", carta2_pib);
    printf("Pontos turisticos: %d\n", carta2_pontos);

    printf("Densidade: %.2f\n", carta2_densidade);
    printf("PIB Per Capita: %.2f\n", carta2_pibpc);

    return 0;
}
