#include <stdio.h>

main(){
    int valores[10], maior, posicao = 0;

    for(int i = 0; i < 10; i++){
    printf("Digite um valor: ");
    scanf("%d", &valores[i]);
    posicao ++;
    
   }

    maior = valores[0];

    for(int i = 1; i < 10; i++){
        if(valores[i] > maior){
            maior = valores[i];
            posicao = i;
        }
   }

   for(int i = 0; i < 10; i++){
    printf("valores: [%d], ", valores[i]);
   }

   printf("\nmaior valor: %d", maior);
   printf("\nPosicao do maior valor: %d", posicao);

    
   
}
