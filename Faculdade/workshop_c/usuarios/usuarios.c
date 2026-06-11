#include "usuarios.h"

void cadastrarUsuario(Usuario* lista, int posicao, int id, const char* nome, int idade){
    
    lista[posicao].id = id;
    lista[posicao].idade = idade;
    strcpy(lista[posicao].nome, nome);

}

Usuario *criarLista(int n){
    return (Usuario *) malloc(n * sizeof(Usuario));
}