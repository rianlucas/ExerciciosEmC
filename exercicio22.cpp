// Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em seguida, o programa deverá apresentar na tela os resultados. 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main () {

    int nros[10], count, soma=0, sub=0;

    for(count=0; count<10; count++) {
        printf("Digite o %d numero inteiro:", count+1);
        scanf("%d", &nros[count]);

        if(count%2 != 0) {
            sub-= nros[count];
        } else {
            soma+= nros[count];
        }
    }

    printf("\n A soma dos numeros das posicoes pares e: %d", soma);
    printf("\n A subtracao dos numeros das posicoes impares e: %d",sub);

}
