#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dist[801];
vector<int> adj[801];

void bfs(int u){
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

    int n, m, c, e, f;
    cin >> n >> m;

    while(m--){
        int a, b;
        cin >> a >> b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    cin >> c >> e >> f;

    fill(dist, dist + 801, -1);
    bfs(c);
    int x = dist[e];

    fill(dist, dist + 801, -1);
    bfs(e);
    int y = dist[f];

    cout << x + y << "\n";

    return 0;
}