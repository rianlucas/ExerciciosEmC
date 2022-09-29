// Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma que as notas são informadas corretamente no intervalo de 1 a 10.

#include <stdio.h>

int main()
{
    int count;
    float nota, soma=0, maior=0, menor=10;
    
    for(count=1; count<=10; count++){
        printf("Digite a %d a nota: ", count);
        scanf("%f", &nota);

        soma = soma+nota;
        if(nota>maior) {
            maior=nota;
        }
        if (nota<menor) {
            menor=nota;
        }
    }
    printf("\n A soma das notas e: %.1f", soma);
    printf("\n A media das notas fornecidas e: %.1f", soma/10);
    printf("\n A maior nota e: %.1f", maior);
    printf("\n A menor nota e: %.1f", menor);

    return 0;
}