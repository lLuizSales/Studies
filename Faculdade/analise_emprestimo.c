
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome_c[100];
    float sal_c, val_e, parc_m, porc_sal, parcela, porcentagem_sal;
    int mes_q;
} dados;

void limpar_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

void calcs(dados *d){
    float parcela = d->val_e / d->mes_q;
    float porcentagem_sal = d->sal_c * 0.20;

    d->parcela = parcela;
    d->porcentagem_sal = porcentagem_sal;
}

void main(){
    dados dados_c;
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
        printf("\n\nNome do Cliente: ");
        scanf("%[^\n]", dados_c.nome_c);
        limpar_buffer();
        printf("Salário do Cliente: ");
        scanf("%f", &dados_c.sal_c);
        printf("Valor do Empréstimo: ");
        scanf("%f", &dados_c.val_e);
        printf("Meses para quitação: ");
        scanf("%d", &dados_c.mes_q);

    calcs(&dados_c);


    if(dados_c.parcela <= dados_c.porcentagem_sal){
        printf("Nome: %s\nSalário: R$ %.2f\nValor Empréstimo: R$ %.2f\nMeses para Quitação: %d\nValor máximo da parcela (20%% do salário): R$ %.2f\nValor da Parcela: R$ %.2f\nSituação do empréstimo: Aprovado\n", 
            dados_c.nome_c, dados_c.sal_c, dados_c.val_e, dados_c.mes_q, dados_c.porcentagem_sal, dados_c.parcela );
    } else {
        printf("Nome: %s\nSalário: R$ %.2f\nValor Empréstimo: R$ %.2f\nMeses para Quitação: %d\nValor máximo da parcela (20%% do salário): R$ %.2f\nValor da Parcela: R$ %.2f\nSituação do empréstimo: Reprovado\n", 
            dados_c.nome_c, dados_c.sal_c, dados_c.val_e, dados_c.mes_q, dados_c.porcentagem_sal, dados_c.parcela );
             
    }
    } else if (opcao != 2) { 
        printf("Opção inexistente!");
    }

} while (opcao != 2);

printf("\nSaindo do programa...\n");

}