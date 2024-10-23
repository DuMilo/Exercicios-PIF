#include <stdio.h>

void *operacoes(int *n1, int *n2, int *n3) { 

    int produto1 = *n1 * *n2;
    int produto2 = *n1 * *n3;
    int produto3 = *n2 * *n3;

    if (produto1 > produto2 && produto1 > produto3) {
        printf("%d\n", produto1);
    } else if (produto2 > produto1 && produto2 > produto3) {
        printf("%d\n", produto2);
    } else {
        printf("%d\n", produto3);
    }

}

int main(void) {
    int N1, N2, N3;
    scanf("%d" "%d" "%d", &N1, &N2, &N3);

    int *ptrN1 = &N1;
    int *ptrN2 = &N2;
    int *ptrN3 = &N3;

    operacoes(ptrN1, ptrN2, ptrN3);

    return 0;
}
