#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = A[0] + A[1] + A[5];
    A[4] = 100;

    printf("Soma: %d\n", soma);
    printf("Mudar valor da posição 4 para 100: %d\n", A[4]);

    return 0;
}
