#include <stdio.h>

int main() {
   int valor[10], qtdnegativos = 0, qtdpositivos = 0, media, positivos = 0;

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

   media = positivos / qtdpositivos;

   printf("Quantidade de numeros negativos: %d", qtdnegativos);
   printf("\nmedia numeros positivos: %d", media);


  
  

   return 0;
}
