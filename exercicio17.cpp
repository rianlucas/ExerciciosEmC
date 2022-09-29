// O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado um número n,calcule seu quadrado usando a soma de ímpares ao invés de produto. 

#include <stdio.h>

int main()
{
    int n,i,impar,soma, quadrado;
    soma=0;
    
    printf("Digite o valor\n");
    scanf("%d",&n);

    i=0;
    impar=-1;
    quadrado= n * n;
    printf("%d = ", quadrado);

    do{
            impar=impar+2;
            soma=+impar;
            printf("%d + ",impar);
            i++;}
    while (i<n);



    return 0;
}