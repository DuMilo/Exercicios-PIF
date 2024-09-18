#include <stdio.h>

int soma(int N1, int N2){
    	int X;
    	X = N1 + N2;
    	return(X);
	}
	
int main(void){
	int A, B, X;
	scanf("%d", &A);
	scanf("%d", &B);
    
    X = soma(A,B);
    
    printf("X = %d\n", X);
	
	return 0;
}
