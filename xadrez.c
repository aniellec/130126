//Anielle Casagrande
//Torre, Bispo e Rainha
//Torre cinco casas para a direita.
//Bispo cinco casas na diagonal para cima e à direita.
//Rainha oito casas para a esquerda.

#include <stdio.h>



    //torre

    void torre(int casas) {
        if (casas == 0) return;

        printf("direita\n");
        torre(casas - 1);
    }

    //bispo

    void bispo(int casas) {
     if (casas == 0) return;

        printf("cima, direita\n");
        bispo(casas - 1);
    }

    //rainha

    void rainha(int casas) {
        if (casas == 0) return;

        printf("esquerda\n");
        rainha(casas - 1);
    }

int main() {
    int i, j;

    torre(5);
    printf("\n");

    bispo(5);
    printf("\n");

    // rainha
    rainha(8);
    printf("\n");

    // bispo
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 1; j++) {
            printf("cima, direita\n");
        }
    }
    printf("\n");

    // cavalo
    for (i = 0; i < 3; i++) {

        if (i < 2) {
            printf("cima\n");
            continue;   // continua até completar os dois movimentos para cima
        }

        for (j = 0; j < 1; j++) {
            printf("direita\n");
            break;      // encerra após o movimento horizontal
        }
    }

    return 0;
}
