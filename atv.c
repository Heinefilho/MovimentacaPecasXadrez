#include <stdio.h>

int main() {
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < 5) {
        printf("Cima Direita\n");
        contadorBispo = contadorBispo + 1;
    }

    printf("\n");

    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha = contadorRainha + 1;
    } while (contadorRainha < 8);

    return 0;
}
