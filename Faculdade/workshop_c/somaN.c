#include <stdio.h>

int somaN(int n) {
    
    int soma;
    
    for(int i = 0; i <= n; i++){

        soma += i;

    }


    return soma;
}

int main() {
    int n, resultado;
    
    scanf("%d", &n);
    
    resultado = somaN(n);

    printf("Soma de 1 ate %d = %d\n", n, resultado);
    return 0;
}