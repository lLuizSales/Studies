#include "analise_emprestimo.c"

void main(){

    Cliente *p_cliente = (Cliente *) calloc(1, sizeof(Cliente));
    Emprestimo *p_emprestimo = (Emprestimo *) calloc(1, sizeof(Emprestimo));

    int opcao = 0;  
    int total_simulacoes = 0;
  
    do{
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

            total_simulacoes++;

            Cliente *cliente = realloc(p_cliente, total_simulacoes * sizeof(Cliente));
            Emprestimo *emprestimo = realloc(p_emprestimo, total_simulacoes * sizeof(Emprestimo));

            p_cliente = cliente;
            p_emprestimo = emprestimo;

            int n = total_simulacoes - 1;

            system(LIMPAR_TELA);
            printf("\n\nNome do Cliente: ");
            scanf("%[^\n]", p_cliente[n].nome);
            limpar_buffer();
            printf("Salário do Cliente: ");
            scanf("%f", &p_cliente[n].salario);
            printf("Valor do Empréstimo: ");
            scanf("%f", &p_emprestimo[n].valor);
            printf("Meses para quitação: ");
            scanf("%d", &p_emprestimo[n].mes_quitacao);
            limpar_buffer();
        
            analise(&p_cliente[n], &p_emprestimo[n]);

            resultado(&p_cliente[n], &p_emprestimo[n]);
            
            printf("\nPressione <ENTER> para voltar ao menu principal.");
            getchar();

            system(LIMPAR_TELA);
            
        } else if( opcao == 2){

            system(LIMPAR_TELA);

            imprimirSimulacoes(p_cliente, p_emprestimo, total_simulacoes);
            
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

        system(LIMPAR_TELA);
        printf("\nSaindo do programa...\n\n");

}