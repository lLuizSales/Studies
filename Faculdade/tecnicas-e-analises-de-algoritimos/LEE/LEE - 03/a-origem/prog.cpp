#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    string acao;
    
    stack<string> pilha;
    
    for(int i = 0; i < a; i++){
        cin >> acao;

        if(acao == "infiltrar"){
            string nome;
            cin >> nome;
            pilha.push(nome);
        } else if(acao == "totem"){
            if(pilha.empty()){
                cout << "acordado" << "\n";
            } else{
                cout << "dentro do sonho de " << pilha.top() << "\n";
            }
        } else if(acao == "chute"){
            pilha.pop();
        }
    }
    return 0;
}