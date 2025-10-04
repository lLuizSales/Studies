#include "usuarios.c"


void main(){
    
    
    
    int n = 9;
    
    Usuario *N = criarLista(n);



    if(N == NULL){

        printf("1\n");

    } else{

        printf("2\n");

    }

    int posição;

    printf("Posição: ");
    scanf("%d", &posição);
    printf("Nome: ");
    scanf("%s", N->nome);
    printf("Idade: ");
    scanf("%d", &N->idade);
    printf("ID: ");
    scanf("%d", &N->id);
    

}