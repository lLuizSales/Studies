#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #define LIMPAR_TELA "cls"
#else
    #define LIMPAR_TELA "clear"
#endif


typedef struct {
    
    float valor, parcela, maximo_parcela;
    int mes_quitacao, status;

} Emprestimo;

typedef struct {

    char nome[100];
    float salario;

} Cliente;


void limpar_buffer();

void analise(Cliente *p_cli, Emprestimo *p_emp);

void resultado(Cliente *p_cli, Emprestimo *p_emp);

void imprimirSimulacoes(Cliente *p_cli, Emprestimo *p_emp, int total);

void apresentacao();