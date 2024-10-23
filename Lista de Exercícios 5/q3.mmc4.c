#include <stdio.h>

void *soma(int *n1, int *n2) {
    printf("%d\n", *n1 + *n2);
}

void *sub(int *n1, int *n2) {
    printf("%d\n", *n1 - *n2);
}

void *mult(int *n1, int *n2) {
    printf("%d\n", *n1 * *n2);
}

void *div(int *n1, int *n2) {
    if (*n2 == 0) {
        printf("Division por zero is undefined.");
    } else {
        printf("%d\n", *n1 / *n2);
    }
}

int main() {
    int N1, N2;
    scanf("%d %d", &N1, &N2);

    int *ptrN1 = &N1;
    int *prtN2 = &N2;

    soma(ptrN1, prtN2);
    sub(ptrN1, prtN2);
    mult(ptrN1, prtN2);
    div(ptrN1, prtN2);
}
