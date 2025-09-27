#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome_c[100];
    float sal_c, val_e, parc_m, porc_sal, parcela, porcentagem_sal;
    int mes_q;
} dados;

void limpar_buffer();

void calcs(dados *d);