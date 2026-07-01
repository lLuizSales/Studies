#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dist[501];
vector<int> adj[501];

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

    fill(dist, dist + 501, -1);

    int m, n, d;
    cin >> m >> n >> d;

    while(n--){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(d);
    
    int max = 0;
    
    for(int i = 1; i <= m; i++){
        if(dist[i] > max){
            max = dist[i];
        }
    }

    cout << max << "\n";

    return 0;
}