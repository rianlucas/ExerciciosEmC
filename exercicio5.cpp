// Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)para os códigos de 0 a 127.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    scanf("%d", &numero);

    
    printf("IMPRIMINDO TABELA ASCII\n");
    for(numero=1;numero<255;numero++)
    printf("Decimal: %i   Octal: %o   Hexadecimal: %x   Caractere: %c \n",numero,numero,numero,numero);
    printf("\n\t\tFIM\n\n");

}