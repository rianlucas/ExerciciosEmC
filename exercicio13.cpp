// Dado um número positivo, crie um programa que escreva todos os números ímpares menores e/ou iguais a esse número e maiores ou igual a um.


#include <stdio.h>
int main (void) {

    int i, numero;
    
    printf("Digite um numero:");
    scanf("%d", &numero);
    for(i=0; i<numero; i++) {
        i += 1;
        printf("%d \t", i);
    }


    return 0;

}