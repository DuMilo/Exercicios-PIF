#include <stdio.h>
#include <stdlib.h>

void lerElementos(int *vetor, int n){
    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
}

int Soma(int *vetor, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += vetor[i];
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *vetor = malloc(sizeof(int)*n);
    lerElementos(vetor, n);
    int sum = Soma(vetor, n);
    vetor = realloc(vetor, n * sizeof(int));
    printf("%d\n", sum);

    free(vetor);
    return 0;
}
