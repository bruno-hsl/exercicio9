#include <stdio.h>

int main() {
    int valor[5], maior, menor, posicaomaior, posicaomenor;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);
    }

    maior = valor[0];
    menor = valor[0];
    posicaomaior = 0;
    posicaomenor = 0;

    for (int i = 1; i < 5; i++) {
        if (valor[i] > maior) {
            maior = valor[i];
            posicaomaior = i;
        }
        if (valor[i] < menor) {
            menor = valor[i];
            posicaomenor = i;
        }
    }

    printf("Maior valor: %d (posicao %d)\n", maior, posicaomaior);
    printf("Menor valor: %d (posicao %d)\n", menor, posicaomenor);

    return 0;
}
