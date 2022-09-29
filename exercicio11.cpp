// Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.O programa deve verificar se a quantidade de alunos é igual a de alunas.

#include <stdio.h>
int main (void) {

    int a, b;

    printf ("Digite o numero de alunos:");
    scanf("%d", &a);

    printf ("Digite o numero de alunas:");
    scanf("%d", &b);

    if(a>b) {
        printf ("O número de alunos é maior");
        
    } else {
        printf ("O número de alunas é maior(%d)", b);

    }
    

    return 0;

}