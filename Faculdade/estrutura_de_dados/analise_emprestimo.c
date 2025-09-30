#include "analise_emprestimo.h"

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void apresentacao(){

    system(LIMPAR_TELA);
    printf("-----Análise de Solicitação Empréstimo-----\n");

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

void imprimirSimulacoes(Cliente *p_cli, Emprestimo *p_emp, int total){

    system(LIMPAR_TELA);
    printf("-------Histórico de análises-----\n");

    if(total == 0){

        printf("Nenhuma análise realizada.\n");

    } else{

        for(int i; i < total; i++){
        
            printf("")

        }
    }


}