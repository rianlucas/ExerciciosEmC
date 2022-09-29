// Faça o programa que apresenta a seguinte saída, perguntando ao usuário o númeromáximo (no exemplo, 9). Este número deve ser sempre ímpar. 


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main () {
int n, i, j, l, k;

printf ("Digite um número ímpar que será o número máximo do triângulo:\n");

do {
    scanf ("%d", &n);

}

while (n%2 == 0);
   l = 0;

   printf ("\n\n\n");

for (i = 1; i <= n; i++) {
       
       for (k = 0; k < l; k++) {
           printf(" ");
       }

    printf ("%d ", i);

    for (j = i+1; j <= n; j++)

        printf ("%d ", j);
        n -= 1;
        printf ("\n");
                l += 2;
   }
   getch();

   return 0;

}