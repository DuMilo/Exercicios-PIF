#include <stdio.h>
#include <math.h>

long long int calculo_rafael(long long int x, long long int y) {
    return pow((3 * x), 2) + pow(y, 2);
}

long long int calculo_beto(long long int x, long long int y) {
    return 2 * pow(x, 2) + pow((5 * y), 2);
}

long long int calculo_carlos(long long int x, long long int y) {
    return -100 * x + pow(y, 3);
}

int main() {
    long long int X, Y, rafa, beto, carlos, test, i;

    while (scanf("%lld", &test) == 1) {
        for (i = 1; i <= test; i++) {
            scanf("%lld %lld", &X, &Y);

            rafa = calculo_rafael(X, Y);
            beto = calculo_beto(X, Y);
            carlos = calculo_carlos(X, Y);

            if (rafa > beto && rafa > carlos){
			printf("Rafael ganhou\n");
			}else if (beto > rafa && beto > carlos){
				printf("Beto ganhou\n");
			}else{
				 printf("Carlos ganhou\n");
			}     
        }
    }

    return 0;
}
