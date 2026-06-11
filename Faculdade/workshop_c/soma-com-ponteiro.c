#include <stdio.h>

int soma(int *n_1, int *n_2){

    return *n_1 + *n_2;
}

int main(){

    int n_1, n_2, resultado;

    printf("Digite n1: ");
    scanf("%d", &n_1);
    
    printf("\nDigite n2: ");
    scanf("%d", &n_2);


    resultado = soma(&n_1, &n_2);

    printf("\nResultado da soma: %d\n", resultado);

    return 0;
}