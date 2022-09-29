// Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem é o mais velho. Considere que essas pessoas possuem idades diferente

#include <stdio.h>
int main (void) {

    int pedro = 18;
    int joana = 23;
    int ismael = 20;

    if (pedro > joana && pedro > ismael) {
        printf("Pedro é o mais velha");
    } else if (joana > pedro && joana > ismael) {
        printf("Joana é a mais velho");
    } else {
        printf("Ismael é o mais velho");
    }
    

    return 0;

}