// Faça um programa que lê dois valores e imprime: (0,1)a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;c) se ambos forem iguais a mensagem "valores iguais".


#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Digite dois numero:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    
    if (n1 < n2){
        printf("%d %d", n1, n2);
    }
    
    if (n1 == n2) {
        printf("Os valores são iguais");
    }
    

    return 0;
}

