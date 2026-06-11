#include <iostream>
#include <queue>

using namespace std;

struct pokemon{
    string nome;
    int poder;
};

struct Comparador {
    bool operator()(const pokemon& a, const pokemon& b) {
        if (a.poder != b.poder) {
            return a.poder < b.poder;
        }
        return a.nome < b.nome;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    pokemon pok, p1, p2;
    priority_queue<pokemon, vector<pokemon>, Comparador> fila;

    int p;
    cin >> p;

    while(p--){
        cin >> pok.nome >> pok.poder;
        fila.push(pok);
    }

    while(fila.size() > 1){
        
        p1 = fila.top();
        fila.pop();

        p2 = fila.top();
        fila.pop();

        cout << p1.nome << " (" << p1.poder << ")" << " x " << "(" << p2.poder << ") " << p2.nome  << " : ";

        if(p1.poder > p2.poder){
            cout << p1.nome << " venceu\n"; 
            p1.poder -= p2.poder;
            fila.push(p1);
        } else if(p1.poder == p2.poder){
            cout << "empate\n";
        } else{
            cout << p2.nome << " venceu\n";
            p2.poder -= p1.poder;
            fila.push(p2);
        }

    }
    
    if(fila.size() == 1){
        cout << fila.top().nome << " venceu com " << fila.top().poder << "\n";
        fila.pop();
    } else{
        cout << "nenhum vencedor\n";
    }

    return 0;
}