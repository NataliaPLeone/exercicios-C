#include <stdio.h>
#include <time.h>

main(){

    int numero = aleatorio();
    int guess;
    printf("insira um numero entre 1 e 100:");
    int tentativa =0;

    do{
        scanf("%d", &guess);

        if(guess==numero){
            printf("\nVoce acertou!\n");
            tentativa++;
            printf("Em %d tentativas",tentativa);
        }else if(guess<numero){
            printf("\nesse numero e menor que o numero desejado\ninsira outro:");
            tentativa++;
        } else {
            printf("\nesse numero e maior que o numero desejado\ninsira outro:");

            tentativa++; // conta a quantia de tentativas
        }

    }while(guess != numero);

}
int aleatorio() // seleciona o numero aleatorio
{
    srand( (unsigned)time(NULL) );

    return (1 + rand()%100); // um número entre 1 100
}
