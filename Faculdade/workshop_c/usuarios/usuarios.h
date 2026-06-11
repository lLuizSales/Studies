#ifndef USUARIOS_H
#define USUARIOS_H
#include <stdio.h>
#include <stdlib.h>


//DEFINIR STRUCT AQUI:
typedef struct{

    char nome[100];
    int id, idade;
    float salario;

} Usuario;

Usuario* criarLista(int n);

void cadastrarUsuario(Usuario* lista, int posicao, int id, const char* nome, int idade);

void listarUsuarios(Usuario* lista, int n);

void salvarUsuariosTxt(Usuario* lista, int n, const char* caminho);

void lerUsuariosTxt(const char* caminho);


#endif