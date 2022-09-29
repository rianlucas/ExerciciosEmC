// Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.

#include <stdio.h>

int main () {

    int num;
    float div1, div5, div10, div20, div50, div100;

    printf("digite um numero: ");
    scanf("%d", &num);

    div1 = (num / 1);
    div5 = (num / 5);
    div10 = (num / 10);
    div20 = (num / 20);
    div50 = (num / 50);
    div100 = (num / 100);

    printf("E preciso de %.2f cedulas de 1 para igualar a quantia %d \n", div1, num);
    printf("E preciso de %.2f cedulas de 5 para igualar a quantia %d \n", div5, num);
    printf("E preciso de %.2f cedulas de 10 para igualar a quantia %d \n", div10, num);
    printf("E preciso de %.2f cedulas de 20 para igualar a quantia %d \n", div20, num);
    printf("E preciso de %.2f cedulas de 50 para igualar a quantia %d \n", div50, num);
    printf("E preciso de %.2f cedulas de 100 para igualar a quantia %d \n", div100, num);

}