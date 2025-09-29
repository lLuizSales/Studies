#include "analise_emprestimo.c"

void main(){

    Cliente cliente;
    int opcao = 0;  
  
    do{
        printf("\n\nMenu:\n");
        printf("------------------------------------\n");
        printf("1. Analisar Cliente\n");
        printf("2. Sair\n");
        printf("------------------------------------\n\n");
        printf("Escolha uma opção:");
        scanf("%d", &opcao);
        limpar_buffer();

    if(opcao == 1) {
        system(LIMPAR_TELA);
        printf("\n\nNome do Cliente: ");
        scanf("%[^\n]", cliente.nome);
        limpar_buffer();
        printf("Salário do Cliente: ");
        scanf("%f", &cliente.salario);
        printf("Valor do Empréstimo: ");
        scanf("%f", &cliente.valor);
        printf("Meses para quitação: ");
        scanf("%d", &cliente.mes_quitacao);

    calcs(&cliente);


    if(cliente.parcela_c <= cliente.porcentagem_c){
        system(LIMPAR_TELA);
        printf("\nNome: %s\nSalário: R$ %.2f\nValor Empréstimo: R$ %.2f\nMeses para Quitação: %d\nValor máximo da parcela (20%% do salário): R$ %.2f\nValor da Parcela: R$ %.2f\nSituação do empréstimo: Aprovado\n", 
            cliente.nome, cliente.salario, cliente.valor, cliente.mes_quitacao, cliente.porcentagem_c, cliente.parcela_c);
    } else {
        system(LIMPAR_TELA);
        printf("\nNome: %s\nSalário: R$ %.2f\nValor Empréstimo: R$ %.2f\nMeses para Quitação: %d\nValor máximo da parcela (20%% do salário): R$ %.2f\nValor da Parcela: R$ %.2f\nSituação do empréstimo: Reprovado\n", 
            cliente.nome, cliente.salario, cliente.valor, cliente.mes_quitacao, cliente.porcentagem_c, cliente.parcela_c);
             
    }
    } else if (opcao != 2) {
        system(LIMPAR_TELA); 
        printf("Opção inexistente!\n");
    }

} while (opcao != 2);

printf("\nSaindo do programa...\n");

}