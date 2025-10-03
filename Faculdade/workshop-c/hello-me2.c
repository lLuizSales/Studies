#include <stdio.h>

int main(){

	char nome[20];
	int idade;
	char cidade[20];

	scanf("%s", nome);

	scanf("%d", &idade);

	scanf("%s", cidade);


	printf("#######################\n");
	printf("# Nome: %s\t#\n", nome);
	printf("# Idade: %d\t#\n", idade);
	printf("# Cidade: %s\t#\n", cidade);
	printf("#######################\n");

	return 0;
}
