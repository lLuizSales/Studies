#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;
int dist[801];
vector<pair<int, int>> adj[801];

void dijkstra(int origem){
    
    fill(dist, dist + 801, INF);
    
    dist[origem] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    pq.push({0, origem});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        
        if (d > dist[u]) {
            continue;
        }

        for (auto [v, w]: adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({ dist[v], v });
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    while(m--){
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    

    dijkstra(1);

    if(dist[n] == INF){
        cout << "Preso no IDP\n";
    } else{
        cout << "Distancia para chegar em casa: " << dist[n] << "\n";
    }

    return 0;
}