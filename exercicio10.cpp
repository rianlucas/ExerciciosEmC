// Faça um programa que receba um número inteiro e que verifique se esse número é parou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor que 50. 

#include <stdio.h>

int main(void)
{

    int num1;

    printf("\nInforme o número: ");
    scanf ("%d",&num1);

    if (num1 % 2 == 0){
        printf ("\nO número %d é par \n ",num1);
        if (num1 > 15) {
            printf("O número é maior que 15");
        } else {
            printf("O número não é maior que 15");
        }
    }
    if (num1 % 2 != 0){
        printf ("\nO número %d é ímpar \n ",num1);
        if (num1 < 50) {
            printf("O número é menor que 50");
        } else {
            printf("O número não éé menor que 50");
        }
    }
    
    
    return 0;
}