#include <stdio.h>

int main() {
   int valor[10], pares = 0 ;

   for(int i = 0; i < 10; i++){
    printf("Digite um numero: ");
    scanf("%d", &valor[i]);
   }

   for(int i = 0; i < 10 ; i++){
    if(valor[i]  % 2 == 0){
        pares++;
    }
   
   }

   

   printf("Quantidade de numeros pares: %d", pares);
 


  
  

   return 0;
}
