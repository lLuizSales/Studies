#include <string.h>
#include <stdio.h>


int main(){

	char cor[20];

	scanf("%s", cor);

	if (!strcmp(cor, "verde")){

		printf("Acelere\n");

	} else if (!strcmp(cor, "amarelo")){

		printf("Diminua a velocidade\n");

	} else{
		printf("Pare\n");
	}


	return 0;
}
