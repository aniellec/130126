//Anielle Casagrande

//Cd Desktop
//clang batalha_naval.c -o soma ./soma

#include <stdio.h>
int main(){

    int tabuleiro[10][10]; //matriz 10 por 10

    int i,j;


    //cria tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("Tabluleiro vazio: \n");

    //mostra tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    int ponta_navio1_linha;
    int ponta_navio1_coluna;
    int ponta_navio2_linha;
    int ponta_navio2_coluna;
    int tamanho_navio1;
    int tamanho_navio2;

    printf("\nDigite a posicao da ponta do primeiro navio(linha): ");
    scanf("%d", &ponta_navio1_linha);

    printf("\nDigite a posicao da ponta do primeiro navio(coluna): ");
    scanf("%d", &ponta_navio1_coluna);

    printf("\nDigite o tamanho do primeiro navio: ");
    scanf("%d", &tamanho_navio1);

    if (ponta_navio1_linha < 0 || ponta_navio1_linha > 9 ||
        ponta_navio1_coluna < 0 || ponta_navio1_coluna > 9) {

        printf("Posicao inicial invalida!\n");
        return 0;
    }

    if (ponta_navio1_coluna + tamanho_navio1 - 1 > 9) {
        printf("O navio cai fora do tabuleiro!\n");
        return 0;
    }

    for (j = ponta_navio1_coluna; j < ponta_navio1_coluna + tamanho_navio1; j++) {
        tabuleiro[ponta_navio1_linha][j] = 3;
    }

    printf("Tabluleiro com primeiro navio: \n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite a posicao da ponta do segundo navio(linha): ");
    scanf("%d", &ponta_navio2_linha);

    printf("\nDigite a posicao da ponta do segundo navio(coluna): ");
    scanf("%d", &ponta_navio2_coluna);

    printf("\nDigite o tamanho do segundo navio: ");
    scanf("%d", &tamanho_navio2);

    if (ponta_navio2_linha < 0 || ponta_navio2_linha > 9 ||
        ponta_navio2_coluna < 0 || ponta_navio2_coluna > 9) {

        printf("Posicao inicial invalida!\n");
        return 0;
    }

    if (ponta_navio2_coluna + tamanho_navio2 - 1 > 9) {
        printf("O navio cai fora do tabuleiro!\n");
        return 0;
    }

    for (j = ponta_navio2_coluna; j < ponta_navio2_coluna + tamanho_navio2; j++) {
    if (tabuleiro[ponta_navio2_linha][j] != 0) {
        printf("O segundo navio sobrepoe o primeiro navio!\n");
        return 0;
    }
    }

    for (j = ponta_navio2_coluna; j < ponta_navio2_coluna + tamanho_navio2; j++) {
        tabuleiro[ponta_navio2_linha][j] = 3;
    }


    printf("Tabluleiro com dois navios: \n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}