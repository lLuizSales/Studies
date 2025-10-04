#include <stdio.h>

void main(){

    int n;

    int *p_n = &n;

    scanf("%d", &n);

    printf("Valor de n: %d\n", n);
    printf("Enderero de n: %p\n", p_n);
    printf("Enderero de n: %p\n", &n);
    printf("Valor de n acessado por ponteiro: %d\n", *p_n);
    
}