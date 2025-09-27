#include <stdio.h>

int main(){

	int nota;

	scanf("%d", &nota);

	if(nota >= 55 && nota <= 60){

		printf("Recuperacao");

	} else if (nota < 55){

		printf("Reprovado");

	} else {

		printf("Aprovado");

	}

	return 0;
}
