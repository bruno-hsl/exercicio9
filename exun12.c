#include <stdio.h>

int main() {
   int valor[5], maior = 0, menor = 0, soma = 0;
   float media;

   

   for(int i = 0; i < 5; i++){
    printf("Digite um valor: ");
    scanf("%d", &valor[i]);

    soma += valor[i];
   }

   maior = valor[0];
   menor = valor[0];

   for(int i = 0; i < 5; i++){
    printf("%d\n", valor[i]);
   }

   for(int i = 1; i < 5; i++){
    if(valor[i] > maior){
        maior = valor[i];
    }

    if(valor[i] < menor){
        menor = valor[i];
    }
   }

   media = soma / 5;

   printf("Maior valor: %d\n", maior);
   printf("Menor valor: %d\n", menor);
   printf("Media: %f\n", media);

   return 0;
}
