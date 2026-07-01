#include <stdio.h>

void troca(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("\n\n----Troca----\n");
    printf("Valor de a: %d\n", *a);
    printf("Valor de b: %d\n", *b);
    

}

int main(){

    int a, b;

    printf("Valor de a: ");
    scanf("%d", &a);

    printf("Valor de b: ");
    scanf("%d", &b);
    
    troca(&a, &b);

    return 0;
}