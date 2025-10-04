#include "usuarios.h"

void cadastrarUsuario(Usuario* lista, int posicao, int id, const char* nome, int idade){

    printf("Posição: ");
    scanf("%d", posicao);
    printf("Nome: ");
    scanf("%s", lista->nome);
    printf("Idade: ");
    scanf("%d", lista->idade);
    printf("ID: ");
    scanf("%d", lista->id);


}

Usuario *criarLista(int n){

    return (Usuario *) malloc(n * sizeof(Usuario));
}