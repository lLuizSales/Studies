#include <iostream>
#include <queue>

using namespace std;

int dist[501];

void bfs(int u, vector<int> adj[]){
    queue<int> fila;
    fila.push(u);
    dist[u] = 0;

    while(!fila.empty()){
        u = fila.front();
        fila.pop();

        for(int v : adj[u]){
            if(dist[v] == -1){
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fill(dist, dist + 501, -1);

    vector<int> adj[501];

    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(1, adj);

    cout << dist[n] << "\n";

    return 0;
}