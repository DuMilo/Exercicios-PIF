#include <stdio.h>

unsigned long long int fatorial(int N1){
    long long int fator = 1;
    for (int i = N1; i > 0; i--){
        fator *= i;
    }
    return(fator);
}

unsigned long long int soma(unsigned long long int N1, long long int N2){
	return N1 + N2; 
}
   
int main()
{
	int M, N;
    unsigned long long int resultM, resultN, X;
   
    while(scanf("%d %d", &M, &N) != EOF){
 
    resultM = fatorial(M);
    resultN = fatorial(N);
   
    X = soma(resultM, resultN);
    printf("%llu\n", X);
    }
   
    return 0;
}
