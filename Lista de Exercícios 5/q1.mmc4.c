#include <stdio.h>

int soma(int *a, int *b) {
    return *a + *b;
}

int sub(int *a, int *b) {
    return *a - *b;
}

int main(void) {
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        int *ptrA = &a;
        int *ptrB = &b;

        printf("%d\n", soma(ptrA, ptrB));
        printf("%d\n", sub(ptrA, ptrB));
    }

    return 0;
}
