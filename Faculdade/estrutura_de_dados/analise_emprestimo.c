#include "analise_emprestimo.h"

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void calcs(dados *d){
    float parcela = d->val_e / d->mes_q;
    float porcentagem_sal = d->sal_c * 0.20;

    d->parcela = parcela;
    d->porcentagem_sal = porcentagem_sal;
}