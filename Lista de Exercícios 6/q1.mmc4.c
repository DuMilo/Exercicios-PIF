#include <stdio.h>
#include <stdlib.h>

void ler(int **num, int *n){
    *n=0;
    *num=malloc(sizeof(int));
    
    while(1){
        int i;
        scanf("%d", &i);
        if(i==0){
            break;
        }
        (*num)[*n] = i;
        (*n)++;
        
        *num = realloc(*num, (*n + 1) * sizeof(int));
    }
}

void imprimir(int *num, int n){
    for(int i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

int main(){
    int *num;
    int n;
    ler(&num, &n);
    imprimir(num, n);
    
    free(num);
    return 0;
}
