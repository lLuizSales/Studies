#include <stdio.h>

int main(){

    int n, N;

    while(scanf("%d\n", &n) && n != 0){

        if(n % 3 == 0) {

            N++;

        }

    }

    printf("%d\n", &N);
    
    return 0;
}