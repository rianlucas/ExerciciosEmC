// Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:(0,1)maior ou igual a 9 A
// maior ou igual a 7.5 e menor que 9 B
// maior ou igual a 6 e menor que 7.5 C
// maior ou igual a 4 e menor que 6 D
// menor que 4 E

#include <stdio.h>

int main()
{

    float a, b, c;
    printf("Digite suas notas");
    scanf("%f %f %f", &a, &b, &c);

    float ME = (a + b + c) /3;
    float MA =(a + b*2 + b*3 + ME)/7 ;

    printf("Sua média foi: %f. E ", MA);

    if (MA >= 7.5 && MA < 9) {
        printf("Sua nota é A");
    } else if (MA >= 6 && MA < 7.5) {
        printf("Sua nota é B");
    } else if (MA >= 4 && MA < 6) {
        printf("Sua nota é C");
    }

    return 0;
}
