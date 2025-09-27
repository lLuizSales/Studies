#include <string.h>
#include <stdio.h>


int main(){

	char cor[20];

	scanf("%s", cor);

	if (!strcmp(cor, "verde")){

		printf("Acelere");

	} else if (!strcmp(cor, "amarelo")){

		printf("Diminua a velocidade");

	} else{
		printf("Pare");
	}


	return 0;
}
