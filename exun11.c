#include <stdio.h>

int main() {
   int valor[10], qtdnegativos = 0, qtdpositivos = 0, soma, positivos = 0;

   for(int i = 0; i < 10; i++){
    printf("Digite um numero negativo ou positivo: ");
    scanf("%d", &valor[i]);
   }

   for(int i = 0; i < 10 ; i++){
    if(valor[i] < 0){
        qtdnegativos++;
    }
    else if(valor[i] > 0){
        positivos += valor[i];
        qtdpositivos ++;
    }
   }

   soma = positivos;

   printf("Quantidade de numeros negativos: %d", qtdnegativos);
   printf("\nsoma numeros positivos: %d", soma);


  
  

   return 0;
}
