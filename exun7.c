#include <stdio.h>

main(){
    int valores[6], maior, posicao = 0;

    maior = valores[0];

    for(int i = 0; i < 10; i++){
    printf("Digite um valor: ");
    scanf("%d", &valores[i]);
    posicao ++;
    
   }

   

    for(int i = 1; i < 10; i++){
        if(valores[i] > maior){
            maior = valores[i];
            posicao = i;
        }
   }

   for(int i = 0; i < 10; i++){
    printf("\n%d", valores[i]);
   }

   printf("maior: %d", maior);
   printf("\nPosicao do maior: %d", posicao);

    
   
}