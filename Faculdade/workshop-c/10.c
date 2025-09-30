#include <stdio.h>

int main(){

    int n, soma = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        
        long N;
        
        scanf("%ld", &N);

        if (N % 2 == 0){
            
            soma = soma + N;
        
        }
    
    }

    printf("%d\n", soma);

    return 0;
}