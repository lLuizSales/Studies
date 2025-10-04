#include "usuarios.c"


void main(){
    
    
    
    int n = 9;
    
    Usuario *N = criarLista(n);



    if(N == NULL){

        printf("1\n");

    } else{

        printf("2\n");

    }

    int id, posicao, idade;
    char nome[50];


    printf("Posição: ");
    scanf("%d", &posicao);
    printf("Nome: ");
    scanf("%s", nome);
    printf("Idade: ");
    scanf("%d", &idade);
    printf("ID: ");
    scanf("%d", &id);
    
    cadastrarUsuario(N, posicao, id, nome, idade);

}