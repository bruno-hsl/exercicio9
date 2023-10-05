#include <stdio.h>

int main() {
    int valores[15], media, soma = 0, aluno = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", aluno + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
        aluno++;
    }

    media = soma / 3;

    for (int i = 0; i < 15; i++) {
        printf("Nota do aluno %d: %d\n", i + 1, valores[i]);
    }

    printf("Media: %d\n", media);

    return 0;
}
