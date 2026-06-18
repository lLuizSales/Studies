#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;
int dist[1001];
vector<pair<int, int>> adj[1001];

void dijkstra(int origem){
    
    fill(dist, dist + 1001, INF);
    
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

    int s, d;
    cin >> s >> d;

    dijkstra(s);

    if(dist[d] ==  INF){
        cout << "nenhuma rota\n";
    } else if(dist[d] == 0){
        cout << "rota segura\n";
    } else{
        cout << "rota insegura\n";
    }
    
    return 0;
}