#include <stdio.h>

int main(){


    int vetor[5];
    int i;
    int maior = 0, menor = 0, media = 0;
    for(i=0;i<5;i++){
        scanf("%d", &vetor[i]);
        if(i==0){
            maior = vetor[i];
            menor = vetor[i];
            media = vetor[i];
        }else{
            if(maior < vetor[i]){
                maior = vetor[i];
            }
            if(menor > vetor[i]){
                menor = vetor[i];
            }
            media += vetor[i];
        }
    }
    media = media/5;
    printf("\nMedia: %d", media);
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
}
