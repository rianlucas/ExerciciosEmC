// Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos.


#include <stdio.h>

int main() {

    int num[10], i, total= 0;
    float media;

    for(i=0; i<10; i++) {

        printf("digite 10 valores. Valor de numero %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    for(i=0; i<10; i++) {
        
        printf("%d \t", num[i]);
        total+= num[i];
    }

    media = total / 10;
    printf("\n %f ", media);

    for(i=0; i<10; i++) {

        if (media == num[i]) {
            printf("\n a media dos numeros e igual ao numero %d", num[i]);
        }

    }

}
