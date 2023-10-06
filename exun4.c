#include <stdio.h>
   
int main(){

    int vetor[8], x, y, soma;

    for(int i = 0; i < 8; i++){
        printf("Digite os numeros em vetor[%d]", i);
        scanf("%d", & vetor[i]);
    }

    do{
        printf("Digite o valor x (0 - 7): ");
        scanf("%d", &x);
        printf("Digite o valor y (0 - 7): ");
        scanf("%d", &y);
            if(x < 0 || x > 7 || y < 7 || y > 7){
                printf("\nindice valido");

            }
    }while(x < 0 || x > 7 && y < 7 || y > 7 );

    soma = vetor[x] + vetor[y];

    printf("Soma do indice[%d] + indice[%d] = %d", x, y, soma);
    

    

    return 0;
}
