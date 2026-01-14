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

    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int ponto_central = 2;

    int ponta_navio1_linha;
    int ponta_navio1_coluna;
    int ponta_navio2_linha;
    int ponta_navio2_coluna;
    int ponta_navio3_linha;
    int ponta_navio3_coluna;
    int ponta_navio4_linha;
    int ponta_navio4_coluna;
    //int tamanho_navio1;
    int tamanho = 3;

    printf("\n*****Navios 1 e 2: horizontais. Navios 3 e 4: diagonais.*****\n\n");

    printf("\nDigite a posicao da ponta do primeiro navio(linha): ");
    scanf("%d", &ponta_navio1_linha);

    printf("\nDigite a posicao da ponta do primeiro navio(coluna): ");
    scanf("%d", &ponta_navio1_coluna);


    if (ponta_navio1_linha < 0 || ponta_navio1_linha > 9 ||
        ponta_navio1_coluna < 0 || ponta_navio1_coluna > 9) {

        printf("Posicao inicial invalida!\n");
        return 0;
    }

    if (ponta_navio1_coluna + tamanho - 1 > 9) {
        printf("O navio cai fora do tabuleiro!\n");
        return 0;
    }

    for (j = ponta_navio1_coluna; j < ponta_navio1_coluna + tamanho; j++) {
        tabuleiro[ponta_navio1_linha][j] = 3;
    }

    printf("Tabluleiro 1 navio: \n");

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

    if (ponta_navio2_linha < 0 || ponta_navio2_linha > 9 ||
        ponta_navio2_coluna < 0 || ponta_navio2_coluna > 9) {

        printf("Posicao inicial invalida!\n");
        return 0;
    }

    if (ponta_navio2_coluna + tamanho - 1 > 9) {
        printf("O navio cai fora do tabuleiro!\n");
        return 0;
    }

    for (j = ponta_navio2_coluna; j < ponta_navio2_coluna + tamanho; j++) {
    if (tabuleiro[ponta_navio2_linha][j] != 0) {
        printf("O segundo navio sobrepoe o primeiro navio!\n");
        return 0;
    }
    }

    for (j = ponta_navio2_coluna; j < ponta_navio2_coluna + tamanho; j++) {
        tabuleiro[ponta_navio2_linha][j] = 3;
    }

    printf("Tabluleiro 2 navios: \n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite a posicao da ponta do terceiro navio(linha): ");
    scanf("%d", &ponta_navio3_linha);

    printf("\nDigite a posicao da ponta do terceiro navio(coluna): ");
    scanf("%d", &ponta_navio3_coluna);


    if (ponta_navio3_linha < 0 || ponta_navio3_linha > 9 ||
        ponta_navio3_coluna < 0 || ponta_navio3_coluna > 9) {

        printf("Posicao inicial invalida!\n");
        return 0;
    }

    if (ponta_navio3_linha + tamanho - 1 > 9 ||
        ponta_navio3_coluna + tamanho - 1 > 9) {
        printf("O navio diagonal cai fora do tabuleiro!\n");
        return 0;
    }

    for (i = 0; i < tamanho; i++) {
        if (tabuleiro[ponta_navio3_linha + i][ponta_navio3_coluna + i] != 0) {
            printf("Navio diagonal sobrepoe outro navio!\n");
            return 0;
        }
    }

    for (i = 0; i < tamanho; i++) {
        tabuleiro[ponta_navio3_linha + i][ponta_navio3_coluna + i] = 3;
    }

    printf("Tabluleiro 3 navios: \n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    printf("\nDigite a posicao da ponta do quarto navio(linha): ");
    scanf("%d", &ponta_navio4_linha);

    printf("\nDigite a posicao da ponta do quarto navio(coluna): ");
    scanf("%d", &ponta_navio4_coluna);


    if (ponta_navio4_linha < 0 || ponta_navio4_linha > 9 ||
        ponta_navio4_coluna < 0 || ponta_navio4_coluna > 9) {

        printf("Posicao inicial invalida!\n");
        return 0;
    }

    if (ponta_navio4_linha + tamanho - 1 > 9 ||
        ponta_navio4_coluna + tamanho - 1 > 9) {
        printf("O navio diagonal cai fora do tabuleiro!\n");
        return 0;
    }

    for (i = 0; i < tamanho; i++) {
        if (tabuleiro[ponta_navio4_linha + i][ponta_navio4_coluna + i] != 0) {
            printf("Navio diagonal sobrepoe outro navio!\n");
            return 0;
        }
    }

    for (i = 0; i < tamanho; i++) {
        tabuleiro[ponta_navio4_linha + i][ponta_navio4_coluna + i] = 3;
    }

    printf("Tabluleiro 4 navios: \n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    int origem_linha = 5;
    int origem_colun    printf("\nTabuleiro com habilidade:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}
