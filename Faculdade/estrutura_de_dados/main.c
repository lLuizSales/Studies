#include "analise_emprestimo.c"

int main() {

    Lista *li = criarLista();
  
    int opcao = 0;

    do {
        apresentacao();
        printf("\n\nMenu:\n");
        printf("------------------------------------\n");
        printf("1. Analisar empréstimo\n");
        printf("2. Histórico de análises\n");
        printf("3. Sair\n");
        printf("------------------------------------\n\n");
        printf("Escolha uma opção:");
        scanf("%d", &opcao);
        limpar_buffer();

        if(opcao == 1){

            Cliente novo_cli;
            Emprestimo novo_emp;

            system(LIMPAR_TELA);
            printf("\n\nNome do Cliente: ");
            scanf("%[^\n]", novo_cli.nome);
            limpar_buffer();
            printf("Salário do Cliente: ");
            scanf("%f", &novo_cli.salario);
            printf("Valor do Empréstimo: ");
            scanf("%f", &novo_emp.valor);
            printf("Meses para quitação: ");
            scanf("%d", &novo_emp.mes_quitacao);
            limpar_buffer();

            analise(&novo_cli, &novo_emp);

            resultado(&novo_cli, &novo_emp);

            inserirFinal(li, novo_cli, novo_emp);
            
            printf("\nPressione <ENTER> para voltar ao menu principal.");
            getchar();

            system(LIMPAR_TELA);
            
        } else if( opcao == 2){

            system(LIMPAR_TELA);

            imprimirSimulacoes(li);
            
            printf("\nPressione <ENTER> para voltar ao menu principal.");
            getchar();

            system(LIMPAR_TELA);

        } else if (opcao != 3){

            system(LIMPAR_TELA); 
            printf("Opção inexistente!\n");

            printf("\nPressione <ENTER> para voltar ao menu principal.");
            getchar();

            system(LIMPAR_TELA);

        }

    } while (opcao != 3);

    free(li);    
    
    system(LIMPAR_TELA);
    printf("\nSaindo do programa...\n\n");


    return 0;

}