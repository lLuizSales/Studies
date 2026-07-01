#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int p;
    cin >> p;

    queue<pair<int, int>> fila;

    for(int i = 0; i < p; i++){
        int a, b;
        cin >> a >> b;
        fila.push({a, b});
    }

    while(!fila.empty()){
        pair<int, int> atual = fila.front();
        fila.pop();
     
        cout << atual.first << " " << atual.second << "\n";
        
        if(!fila.empty()){
            pair<int, int> proxima = fila.front();
            fila.pop();

            if(proxima.first + proxima.second == 7){
                fila.push(proxima);
            }
        }
    }
    return 0;
}