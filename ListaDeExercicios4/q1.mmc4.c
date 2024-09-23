#include <stdio.h>

#define NUM_CANDIDATOS 5

struct Candidato{
    int inscricaoCandidato;
    float notasCandidato[4];
    float mediaCandidato;
    char statusCandidato[12]; 
} typedef Candidato;

float calcularMedia(float notasCandidato[], int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += notasCandidato[i];
    }
    return soma / n;
}

void ordenarCandidatos(Candidato candidatos[], int n) {
    Candidato temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (candidatos[j].mediaCandidato < candidatos[j + 1].mediaCandidato) {
                temp = candidatos[j];
                candidatos[j] = candidatos[j + 1];
                candidatos[j + 1] = temp;
            }
        }
    }
}

int main() {
    Candidato candidatos[NUM_CANDIDATOS];
    int n = NUM_CANDIDATOS;


    for (int i = 0; i < n; i++) {
        scanf("%d", &candidatos[i].inscricaoCandidato);
        for (int j = 0; j < 4; j++) {
            scanf("%f", &candidatos[i].notasCandidato[j]);
        }
        candidatos[i].mediaCandidato = calcularMedia(candidatos[i].notasCandidato, 4);
    }


    ordenarCandidatos(candidatos, n);


    for (int i = 0; i < n; i++) {
        if (candidatos[i].mediaCandidato >= 6.0) {
            if (i == 0) {
                snprintf(candidatos[i].statusCandidato, sizeof(candidatos[i].statusCandidato), "Classificado");
            } else {
                snprintf(candidatos[i].statusCandidato, sizeof(candidatos[i].statusCandidato), "Aprovado");
            }
        } else {
            snprintf(candidatos[i].statusCandidato, sizeof(candidatos[i].statusCandidato), "Reprovado");
        }
    }


    for (int i = 0; i < n; i++) {
        printf("%d %.2f %s\n", candidatos[i].inscricaoCandidato, candidatos[i].mediaCandidato, candidatos[i].statusCandidato);
    }

    return 0;
}
