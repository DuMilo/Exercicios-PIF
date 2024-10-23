#include <stdio.h>

int main(){
	
	struct Biblioteca{
		char nomeLivro[100];
		char nomeAutor[50];
		char sobrenomeAutor[50];
		int dataDia;
		int dataMes;
		int dataAno;
	} typedef LivroInfo;
	
	LivroInfo livro;
	
	fgets(livro.nomeLivro, 100, stdin);	
	scanf("%s %s %d %d %d", &livro.nomeAutor, &livro.sobrenomeAutor, &livro.dataDia, &livro.dataMes, &livro.dataAno);
	livro.nomeLivro[strcspn(livro.nomeLivro, "\n")] = 0;
	
	printf("Título: %s\n", livro.nomeLivro);
	printf("Autor: %s %s\n", livro.nomeAutor, livro.sobrenomeAutor);
	printf("Data de Publicação: %02d/%02d/%d\n", livro.dataDia, livro.dataMes, livro.dataAno);
	
	return 0;
}
