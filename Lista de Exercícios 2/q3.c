#include <stdio.h>
#include <stdlib.h>

void gerarMatriz(int n) {
    int matriz[100][100];  
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = abs(i - j) + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", matriz[i][j]);
            if (j < n - 1) printf(" ");  
        }
        printf("\n");
    }
    printf("\n");  
}

int main() {
    int n;

    while (1) {
        scanf("%d", &n);  
        if (n == 0) {
            break;  
        }
        gerarMatriz(n);  
    }

    return 0;
}

