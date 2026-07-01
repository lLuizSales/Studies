#include <stdio.h>

int main(){

    int n, N = 0;

    while(1){

        scanf("%d", &n);

        if(n == 0) break;

        if(n % 3 == 0) {

            N++;

        }

    }

    printf("%d\n", N);
    
    return 0;
}