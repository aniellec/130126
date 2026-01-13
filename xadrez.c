//Anielle Casagrande
//Torre, Bispo e Rainha
//Torre cinco casas para a direita.
//Bispo cinco casas na diagonal para cima e à direita.
//Rainha oito casas para a esquerda.

#include <stdio.h>

int main() {
    
    int i;

    //torre

    i = 0;
    for(i=0; i < 5; i++) {
        printf("direita, ");
    }
    printf("\n");

    //bispo

    i = 0;
    while (i < 5) {
        printf("cima, direita\n");
        i++;
    }

    //rainha

    i = 0;
    do {
        printf("esquerda, \n");
        i++;
    } while (i < 8);
    printf("\n");

    return 0;
}
