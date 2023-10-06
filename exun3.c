#include <stdio.h>
   
int main(){
    int vetorA[10];
    int vetorB[10];

     for(int i = 0;i < 10; i++){
        printf("digite os valores: ");
        scanf("%d", &vetorA);
    }

     for(int i = 0;i < 10; i++){
        vetorB[i] = (vetorA[i] * vetorA[i]);
        printf("VetorA[%d] - vetorB[%d] ", vetorA[i], vetorB[i]);
        
    }
    return 0;
}