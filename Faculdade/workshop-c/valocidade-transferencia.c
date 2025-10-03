#include <stdio.h>

int main(){

	int tamanho, tempo;

	float velocidade, velocidade_d;

	scanf("%d", &tamanho);
	scanf("%d", &tempo);

	velocidade = (float)tamanho / (float)tempo;
	velocidade_d = (float)tempo / 2;

	printf("Velocidade media: %.2f MB/s\n", velocidade);
	printf("Tempo com velocidade dobrada: %.2f s\n", velocidade_d);



	return 0;
}
