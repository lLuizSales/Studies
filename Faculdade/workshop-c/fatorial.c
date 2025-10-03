#include <stdio.h>


int fatorial(int n) {

    if (n <= 1) return 1;
    
    return n * fatorial(n-1);
}

int main() {
    int n, resultado;

    scanf("%d", &n);

    resultado = fatorial(n);

    printf("%d! = %d\n", n, resultado);
    return 0;
}