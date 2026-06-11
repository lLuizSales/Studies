#include <stdio.h>

int main(){

	int idade = 21;
	char nome[20] = "Luiz";
	char cidade[20] = "Brasilia";
	float altura = 1.74;

	printf("Dados:\n\tNome:%s\n\tIdade:%d\n\tCidade:%s\n\tAltura:%.2f\n", nome, idade, cidade, altura);


	return 0;
}