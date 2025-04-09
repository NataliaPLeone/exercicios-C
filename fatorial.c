#include <stdio.h>

int main(){ // fatorial

    int n,i, fatorial = 1;
    printf("\n Digite o n�mero: ");
    scanf("%d", &n);
    printf("\n");
    for(i = n; i>0;i--){
        fatorial *= i;
        printf("%d*", i);
    }
    printf("= %d", fatorial);

}
