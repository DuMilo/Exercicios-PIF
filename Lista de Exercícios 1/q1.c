#include <stdio.h>

int main() {
    float N;
    int valor;

    scanf("%f", &N);

    valor = (N * 100 + 0.5);

    int nota100 = valor / 10000;
    valor %= 10000;

    int nota50 = valor / 5000;
    valor %= 5000;

    int nota20 = valor / 2000;
    valor %= 2000;

    int nota10 = valor / 1000;
    valor %= 1000;

    int nota5 = valor / 500;
    valor %= 500;

    int nota2 = valor / 200;
    valor %= 200;

    int moeda100 = valor / 100;
    valor %= 100;

    int moeda50 = valor / 50;
    valor %= 50;

    int moeda25 = valor / 25;
    valor %= 25;

    int moeda10 = valor / 10;
    valor %= 10;

    int moeda5 = valor / 5;
    valor %= 5;

    int moeda1 = valor;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda100);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);

    return 0;
}
