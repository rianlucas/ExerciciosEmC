// Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o correspondente em Celsius e em Kelvin: 

int main(){

    float C;
    int F,c;

    printf("Informe um valor de Fahrenheit para converter para Celsius: ");
    scanf("%d",&F);

        C = (F - 32.0) * (5.0 / 9.0);
        c = (F - 32) * (5 / 9);

    printf("Celsius: %2.f\n",C);

    return 0;
}
