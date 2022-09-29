// Faça um programa que solicite 2 números e informe: a soma dos números, o produto doprimeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadradada soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulodo primeiro número. (0,1)


int main(){

   float n1, n2, soma, quadrado, produto;

   printf("Numero 1: ");
   scanf("%f", &n1);
   printf("Numero 2: ");
   scanf("%f", &n2);

   soma = n1 + n2;
   produto = n1 * (n2 * n2);
   quadrado = n1 * n1;

   printf("\nSoma dos numeros: %.2f\n", soma);
   printf("Produto do primeiro pelo quadrado do segundo: %.2f\n", produto);
   printf("Quadrado do primeiro numero: %.2f\n\n", quadrado);

}