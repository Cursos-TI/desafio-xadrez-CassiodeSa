#include <stdio.h>

#define BISPO_MOVIMENTO 5
#define TORRE_MOVIMENTO 5
#define RAINHA_MOVIMENTO 8

void moverBispo() {
    // Movimentação do Bispo
    for (int i = 1; i <= BISPO_MOVIMENTO; i++) {
        printf("Bispo se moveu: Diagonal superior direita %d casas\n", i);
    }
}

void moverTorre() {
    // Movimentação da Torre
    for (int i = 1; i <= TORRE_MOVIMENTO; i++) {
        printf("Torre se moveu: Direita %d casas\n", i);
    }
}

void moverRainha() {
    // Movimentação da Rainha
    for (int i = 1; i <= RAINHA_MOVIMENTO; i++) {
        printf("Rainha se moveu: Esquerda %d casas\n", i);
    }
}

int main() {
    // Exibindo as movimentações das peças
    printf("Movimentação das Peças:\n");

    // Movimentação do Bispo
    moverBispo();

    // Movimentação da Torre
    moverTorre();

    // Movimentação da Rainha
    moverRainha();

    return 0;
}
