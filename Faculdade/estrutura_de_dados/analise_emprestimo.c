#include "analise_emprestimo.h"

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void calcs(Cliente *cli){

    float parcela_e = cli->valor / cli->mes_quitacao;
    float porcentagem_e = cli->salario * 0.20;

    cli->parcela_c = parcela_e;
    cli->porcentagem_c = porcentagem_e;

}