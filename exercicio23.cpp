// Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados

#include <stdio.h>

int main () {

    int num[10],i;

    for (i=0;i<6;i++) {

        printf("Digite o %d numero inteiro:", i+1);
        scanf("%d",&num[i]);

    }

     for (i=5;i>=0;i--) {
        printf("%d \t", num[i]);
    }

}