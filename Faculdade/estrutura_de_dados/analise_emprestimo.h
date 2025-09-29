#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #define LIMPAR_TELA "cls"
#else
    #define LIMPAR_TELA "clear"
#endif

typedef struct {

    char nome[100];
    float salario, valor, parcela_c, porcentagem_c;
    int mes_quitacao;

} Cliente;

typedef struct {
    
    float parcela, porcentagem, parcela_e, porcentagem_e;

} Emprestimo;

void limpar_buffer();

void calcs(Cliente *cli);