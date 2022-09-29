// escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses números em pares e ímpares e os armazenem em dois outros vetores separando pares e ímpares, exibindo os resultados na tela

#include <stdio.h>

int main(void)
{
  int par[10], impar[10], num, pares = 0, impares = 0;
  int i, n_read, total_num;

  for (;;)
  {
    printf("*\n");
    printf("* digite um numero: ");

    n_read = scanf(" %d", &num);
    if (n_read < 1)
    {
      printf("* digitacao invalida, ignorando linha digitada\n");
      scanf("%*[^\n]");
      continue;
    }

    total_num ++;

    if (num == 0 || total_num == 12)
    {
      // terminando entrada de dados porque leu numero 0
      break;
    }

    if (num & 1)
    {
      impar[impares++] = num;
      if (impares == 10)
      {
        // terminando entrada de dados porque ja' leu 10 impares
        break;
      }
    }
    else
    {
      par[pares++] = num;
      if (pares == 10)
      {
        // terminando entrada de dados porque ja' leu 10 pares
        break;
      }
    }
  } // for

  printf("*\n");

  printf("* total de numeros pares:   %d\n", pares);
  for (i = 0; i < pares; i++)
    printf("* par[%d]=%d\n", i, par[i]);

  printf("* \n");

  printf("* total de numeros impares:   %d\n", impares);
  for (i = 0; i < impares; i++)
    printf("* impar[%d]=%d\n", i, impar[i]);

  printf("*\n");
}