#include <iostream>
#include <map>
#include <set>

using namespace std;

struct digimon{
    string nome;
    int fome;
    int ordem_chegada;
};

struct Comparador{
    bool operator()(const digimon& a, const digimon& b) const{
        if(a.fome != b.fome){
            return a.fome > b.fome;
        }
        return a.ordem_chegada < b.ordem_chegada;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    digimon d, resultado;
    set<digimon, Comparador> fila;
    map<string, digimon> busca;

    int a, i = 0;
    cin >> a;

    while(a--){
        int busca_fome = 0;
        string acao, busca_nome;
        cin >> acao;

        if(acao == "CHEGA"){
            cin >> d.nome >> d.fome;    
            d.ordem_chegada = ++i;
            fila.insert(d);
            busca[d.nome] = d;
        } else if(acao == "FOME"){
            cin >> busca_nome >> busca_fome;
            resultado = busca[busca_nome]; 
            fila.erase(resultado);
            resultado.fome += busca_fome;
            fila.insert(resultado);
            busca[busca_nome] = resultado;
        } else if(acao == "SAI"){
            cin >> busca_nome;
            resultado = busca[busca_nome];
            fila.erase(resultado);
        } else{
            resultado = *fila.begin();
            cout << resultado.nome << "\n";
            fila.erase(fila.begin());
            busca.erase(resultado.nome);
        }
    }
    return 0;
}