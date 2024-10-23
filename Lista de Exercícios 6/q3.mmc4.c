#include <stdio.h>
#include <stdlib.h>

struct Estudante{
    char nome[100];
    float nota;
} typedef Aluno;
    
void lerAlunos(Aluno *alunos, int n){
    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%f", &alunos[i].nota);
    }
}

Aluno melhorAluno(Aluno *alunos, int n){
    Aluno maior = alunos[0];
    for(int i=1; i<n; i++){
        if(alunos[i].nota>maior.nota){
            maior = alunos[i];
        }
    }
    
    return maior;
}

int main()
{
    int n;
    Aluno *alunos = malloc(sizeof(Aluno));
    scanf("%d", &n);
    alunos = realloc(alunos, n * sizeof(Aluno));
    lerAlunos(alunos, n);
    Aluno maior = melhorAluno(alunos, n);
    printf("%s %.1f\n", maior.nome, maior.nota);
    
    free(alunos);
    return 0;
}
