#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool visitado[601];
vector<int> adj[601];

void bfs(int u){
    queue<int> fila;

    fila.push(u);
    visitado[u] = true;
    
    while(!fila.empty()){
        u = fila.front();
        fila.pop();

        for(int v :adj[u]){
            if(!visitado[v]){
                visitado[v] = true;
                fila.push(v);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fill(visitado, visitado + 601, false);

    int n, m;
    cin >> n >> m;


    while(m--){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int x = 0;
    
    for(int i = 1; i <= n; i++){
        if(!visitado[i]){
            x++;
            bfs(i);
        }
    }

    cout << x - 1 << "\n";

    return 0;
}