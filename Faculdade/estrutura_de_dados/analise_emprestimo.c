#include "analise_emprestimo.h"

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void apresentacao(){

    system(LIMPAR_TELA);
    printf("-----Análise de Solicitação Empréstimo-----\n");

}

Lista *criarLista(){
    Lista *li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL){
        *li = NULL;
    }

    return li;
}

int inserirFinal(Lista *li, Cliente novo_cli, Emprestimo novo_emp){

    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));

    if(novo == NULL){

        return 0;
    
    }

    novo->cli_dados = novo_cli;
    novo->emp_dados = novo_emp;
    novo->prox = NULL;

    if ((*li) == NULL) {
    
        *li = novo;
        
        return 1;
    
    }

    Elemento *atual = *li;

    while (atual->prox != NULL){

        atual = atual->prox;

    }


    atual->prox = novo;
    return 1;
}

void analise(Cliente *p_cli, Emprestimo *p_emp){

    p_emp->maximo_parcela = p_cli->salario * 0.20;

    if(p_emp->mes_quitacao > 0){
        
        p_emp->parcela = p_emp->valor / p_emp->mes_quitacao;

    } else{

        p_emp->parcela = p_emp->valor;

    }

    if(p_emp->parcela <= p_emp->maximo_parcela){

        p_emp->status = 1;

    } else{

        p_emp->status = 0;

    }
}

void resultado(Cliente *p_cli, Emprestimo *p_emp){
    
    system(LIMPAR_TELA);
    printf("-----Resultado da análise-----\n\n");
    printf("Nome: %s\n", p_cli->nome);
    printf("Salário: R$ %.2f\n", p_cli->salario);
    printf("Valor Empréstimo: R$ %.2f\n", p_emp->valor);
    printf("Meses para Quitação: %d\n", p_emp->mes_quitacao);
    printf("Valor máximo da parcela (20%% do salário): R$ %.2f\n", p_emp->maximo_parcela);
    printf("Valor da Parcela: R$ %.2f\n", p_emp->parcela);

    if(p_emp->status == 1){

        printf("Situação do empréstimo: Aprovado\n");
    
    } else{

        printf("Situação do empréstimo: Reprovado\n");

    }
}

void imprimirSimulacoes(Lista *li){

    system(LIMPAR_TELA);
    printf("-------Histórico de análises-----\n");

    if((*li) == NULL){

        printf("\n\nNenhuma análise realizada.\n");

    }

    Elemento *atual = *li;
    int i = 1;

    while(atual != NULL){
        
        printf("\n-----Análise %d -----\n", i++);
        printf("Nome: %s\n", atual->cli_dados.nome);

        if(atual->emp_dados.status == 1){

            printf("Situação do empréstimo: Aprovado\n");
    
        } else{

            printf("Situação do empréstimo: Reprovado\n");

        }

        atual = atual->prox;

    }

}