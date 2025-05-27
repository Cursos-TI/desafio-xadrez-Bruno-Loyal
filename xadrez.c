#include <stdio.h>

int main() {
    // Movimento da Torre (for) - 5 casas à direita
    int casas_torre = 5;
    printf("\nMovimento da Torre:\n");
    for(int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while) - 5 casas na diagonal superior direita
    int casas_bispo = 5;
    int contador_bispo = 0;
    printf("\nMovimento do Bispo:\n");
    while(contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha (do-while) - 8 casas à esquerda
    int casas_rainha = 8;
    int contador_rainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while(contador_rainha < casas_rainha);

    return 0;
}