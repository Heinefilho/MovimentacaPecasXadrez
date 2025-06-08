#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoInterno(int horizontal) {
    if (horizontal == 0) return;
    printf("Cima Direita\n");
    moverBispoInterno(horizontal - 1);
}

void moverBispoExterno(int vertical, int horizontal) {
    if (vertical == 0) return;
    moverBispoInterno(horizontal);
    moverBispoExterno(vertical - 1, horizontal);
}

void moverCavalo() {
    for (int i = 0; i < 3; i++) {
        if (i == 2) break;
        printf("Cima\n");
    }

    for (int j = 0; j < 2; j++) {
        if (j != 1) continue;
        printf("Direita\n");
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispoExterno(1, 5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
