#include <stdio.h>

int main() {
    float total_conta, conta_p_pessoa;
    int quantidade_pessoas;
    
    scanf("%f", &total_conta);
    
    scanf("%d", &quantidade_pessoas);

    conta_p_pessoa = total_conta / (float)quantidade_pessoas;

    printf("Cada pessoa deve pagar: R$ %.2f\n", conta_p_pessoa);

    return 0;
}
