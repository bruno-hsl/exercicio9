#include <stdio.h>

int main() {
    int valores[6] = {2, 4, 6, 8, 10, 12};

    printf("Valores em ordem inversa:\n");

    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
