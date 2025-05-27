#include <stdio.h>

// Função recursiva para movimento da Torre (5 casas para a direita)
void moverTorre(int casas_restantes) {
    if (casas_restantes == 0) return;
    printf("Direita\n");
    moverTorre(casas_restantes - 1);
}

// Função recursiva para movimento da Rainha (8 casas para a esquerda)
void moverRainha(int casas_restantes) {
    if (casas_restantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1);
}

// Função recursiva para movimento do Bispo (5 casas na diagonal para cima e direita)
// Implementa loops aninhados: externo para vertical (cima), interno para horizontal (direita)
void moverBispo(int casas_verticais_restantes, int casas_horizontais_restantes) {
    if (casas_verticais_restantes == 0 || casas_horizontais_restantes == 0) return;

    // Loop externo: vertical (cima)
    for (int i = 0; i < casas_verticais_restantes; i++) {
        // Loop interno: horizontal (direita)
        for (int j = 0; j < casas_horizontais_restantes; j++) {
            printf("Cima, Direita\n");
            // Imprime o movimento para uma casa da diagonal e sai para a recursão
            moverBispo(casas_verticais_restantes - 1, casas_horizontais_restantes - 1);
            return; // evita múltiplas impressões
        }
    }
}

// Função para movimento complexo do Cavalo (2 casas para cima e 1 para a direita)
// Utiliza loops aninhados com múltiplas variáveis e controle de fluxo com continue e break
void moverCavalo() {
    int casas_para_cima = 2;
    int casas_para_direita = 1;
    int movimentos_cima = 0;
    int movimentos_direita = 0;

    printf("Movimento do Cavalo:\n");

    // Loop externo para controlar o movimento vertical (para cima)
    for (int i = 0; i < 10; i++) { // limite para evitar loop infinito
        if (movimentos_cima >= casas_para_cima && movimentos_direita >= casas_para_direita) {
            break; // movimento completo
        }

        if (movimentos_cima < casas_para_cima) {
            printf("Cima\n");
            movimentos_cima++;
            continue; // volta para o início do loop externo
        }

        // Quando já moveu para cima, faz o movimento para a direita
        for (int j = 0; j < 5; j++) { // limite para evitar loop infinito
            if (movimentos_direita >= casas_para_direita) {
                break;
            }
            printf("Direita\n");
            movimentos_direita++;
            break; // sai do loop interno após um movimento para a direita
        }
    }
    printf("\n");
}

int main() {
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casas_bispo, casas_bispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casas_rainha);
    printf("\n");

    moverCavalo();

    return 0;
}