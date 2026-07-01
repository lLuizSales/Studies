#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visitado[801];
vector<int> adj[801];

void bfs(int u){ 
    queue<int> fila;
    fila.push(u); 
    visitado[u] = true; 
    while(!fila.empty()){ 
        u = fila.front(); 
        fila.pop(); 
        for(int v : adj[u]){
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

    int n, m;

    while(cin >> n >> m && (n != 0 && m != 0)){

        for(int i = 0; i < 801; i++){
            adj[i].clear();
        }

        fill(visitado, visitado + 801, false);

        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(1);
        
        bool conexo = true;

        for(int i = 1; i <= n; i++){
            if(!visitado[i]){
                conexo = false;
                break;
            }
        }
        
        if(conexo){
            cout << "Todo mundo ja trocou figurinha com todo mundo\n";
        } else{
            cout << "Ainda ha oportunidades\n";
        }

    }

    return 0;
}