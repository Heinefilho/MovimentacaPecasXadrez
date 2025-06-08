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

    printf("\n");

    printf("Movimento do Cavalo:\n");
    for (int l = 0; l < 1; l++) {
        int passo = 0;
        while (passo < 2) {
            printf("Baixo\n");
            passo = passo + 1;
        }
        printf("Esquerda\n");
    }

    return 0;
}
