#include <iostream>
#include <vector>

using namespace std;

bool visitado[801] = {};

void dfs(int u, vector<int> adj[]){
    visitado[u] = true;
    for(int vizinho : adj[u]){
        if(!visitado[vizinho]){
            dfs(vizinho, adj);
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> adj[801];

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, adj);

    bool conexo = true;

    for(int i = 1; i <= n; i++){
        if(!visitado[i]){
            conexo = false;
            break;
        }
    }

    if(conexo){
        cout << "Todo mundo eh amigo de todo mundo\n";
    } else{
        cout << "Varios grupos de amigos\n";
    }

    return 0;
}