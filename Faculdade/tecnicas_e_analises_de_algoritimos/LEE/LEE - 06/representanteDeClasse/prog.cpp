#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool visitado[601];

int bfs(int u, vector<int> adj[]){
    queue<int> fila;
    int contador = 0;

    fila.push(u);
    visitado[u] = true;
    
    while(!fila.empty()){
        u = fila.front();
        fila.pop();
        contador++;

        for(int v :adj[u]){
            if(!visitado[v]){
                visitado[v] = true;
                fila.push(v);
            }
        }
    }

    return contador;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fill(visitado, visitado + 601, false);

    vector<int> adj[601];

    int n, m;
    cin >> n >> m;


    while(m--){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int maior = 0;

    for(int i = 1; i <= n; i++){
        if(!visitado[i]){

            int atual = bfs(i, adj);

            maior = max(maior, atual);

        }
    }

    cout << "O grupo mais numeroso tem " << maior << " aluno(s)\n";

    return 0;
}