#include <stdio.h>

#define MAX_PILOTOS 100

typedef struct {
    char nomePiloto[100];
    int numeroPiloto;
    float tempoCorrida;
} Piloto;


void ordenarPilotos(Piloto pilotos[], int n) {
    Piloto temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (pilotos[j].tempoCorrida > pilotos[j + 1].tempoCorrida) {

                temp = pilotos[j];
                pilotos[j] = pilotos[j + 1];
                pilotos[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n; 
    
    scanf("%d", &n);
    
    Piloto pilotos[MAX_PILOTOS];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", pilotos[i].nomePiloto, &pilotos[i].numeroPiloto, &pilotos[i].tempoCorrida);
    }

    ordenarPilotos(pilotos, n);

    printf("Vencedor: %s %d\n", pilotos[0].nomePiloto, pilotos[0].numeroPiloto);

    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", pilotos[i].nomePiloto, pilotos[i].numeroPiloto, pilotos[i].tempoCorrida);
    }

    return 0;
}
