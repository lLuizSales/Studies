#include <stdio.h>

int main(){

    int voto;

    scanf("%d", &voto);

    switch (voto) {

        case 17 : puts("Jeremias"); break;
        case 86 : puts("Joao Gabriel"); break;
        case 34 : puts("Lorena"); break;
        case 29 : puts("Felipe"); break;

        default : puts("Opção invalida!");
    }

    return 0;
}