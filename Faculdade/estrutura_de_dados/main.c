#include "analise_emprestimo.c"

void main(){


    apresentacao();

    Cliente cliente;
    Emprestimo emprestimo;

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
            scanf("%f", &emprestimo.valor);
            printf("Meses para quitação: ");
            scanf("%d", &emprestimo.mes_quitacao);
            limpar_buffer();
        
            analise(&cliente, &emprestimo);

            resultado(&cliente, &emprestimo);
            
            printf("\nPressione <ENTER> para voltar ao menu principal.");
            getchar();

            system(LIMPAR_TELA);
            
    } else if (opcao != 2) {

        system(LIMPAR_TELA); 
        printf("Opção inexistente!\n");

        printf("\nPressione <ENTER> para voltar ao menu principal.");
        getchar();

        system(LIMPAR_TELA);

    }

} while (opcao != 2);

    system(LIMPAR_TELA);
    printf("\nSaindo do programa...\n\n");

}