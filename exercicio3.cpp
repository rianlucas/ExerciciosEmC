//Escreva um programa que leia um número na base decimal e em seguida imprima esse mesmo número nas bases octal e hexadecimal.
#include<stdio.h>

int main()
{

    int a;
    char b[10];

    printf("Digite um valor inteiro:");
    scanf("%d", &a);

    printf("%d em octal: %o \n", a,a);
    printf("%d em binario é:%s \n", a,b);
    printf("%d em hexadecimal é:%X \n\n\n ", a,a);

    return 0
}