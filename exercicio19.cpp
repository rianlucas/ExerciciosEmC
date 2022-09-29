// Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro. 

#include <stdio.h>

int main()
{

    float maior=0, maior_vetor[5];
    int count;
    for(count=0; count<5; count++){
        if(maior_vetor[count]>maior)
            maior=maior+maior_vetor[count];
    }
    
    float num[5], maior_num;
    int i;

    for(i=0;i<5;i++) {
        printf("Digite o %d elemento para o vetor: ", i+ 1);
        scanf("%f", &num[i]);
    }

    maior_num = maior;
    printf("\n O maior numero e: %.2f", maior_num);

    return 0;
}