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

typedef struct Elemento {

    Emprestimo emp_dados;
    Cliente cli_dados;
    struct Elemento *prox;

} Elemento;

typedef Elemento *Lista;

Lista *criarLista();

void limpar_buffer();

int inserirInicio(Lista *li, Cliente novo_cli, Emprestimo novo_emp);

int inserirFinal(Lista *li, Cliente novo_cli, Emprestimo novo_emp);

void analise(Cliente *p_cli, Emprestimo *p_emp);

void resultado(Cliente *p_cli, Emprestimo *p_emp);

void imprimirSimulacoes(Lista *li);

void apresentacao();