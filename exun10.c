#include <stdio.h>

int main() {
    int valores[15], soma = 0, aluno = 0;
    float media;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", aluno + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
        aluno++;
    }

    media = soma / 15;

    for (int i = 0; i < 15; i++) {
        printf("Nota do aluno %d: %d\n", i + 1, valores[i]);
    }

    printf("Media: %f\n", media);

    return 0;
}
