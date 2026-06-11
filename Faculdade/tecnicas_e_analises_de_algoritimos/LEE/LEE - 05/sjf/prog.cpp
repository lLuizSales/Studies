#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct detento{
    string nome;
    int tempo;
};

struct Comparador {
    bool operator()(const detento& a, const detento& b) {
        if (a.tempo != b.tempo) {
            return a.tempo < b.tempo;
        }
        return a.nome < b.nome;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    detento d;
    priority_queue<detento, vector<detento>, Comparador> fila;

    int n;
    cin >> n;

    while(n--){
        cin >> d.nome >> d.tempo;
        fila.push(d);
    }

    while(!fila.empty()){
        d = fila.top();
        cout << d.nome << " " << d.tempo << "\n";
        fila.pop();
        d.tempo /= 2;

        if(d.tempo >= 1){
            fila.push(d);
        }
    }

    return 0;
}