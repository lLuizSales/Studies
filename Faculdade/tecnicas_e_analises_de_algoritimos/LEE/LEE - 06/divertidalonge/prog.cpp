#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 1e9;
int dist[805];
vector<pair<int, int>> adj[805];

void dijkstra(int origem){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[origem] = 0;
    pq.push({0, origem});

    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(d > dist[u]) continue;

        for(auto edge : adj[u]){
            int v = edge.first;
            int w = edge.second;

            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
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

    fill(dist, dist + 805, INF);

    dijkstra(1);

    int maior_distancia = 0;
    bool alcancou_todos = true;

    for(int i = 2; i <= n; i++){
        if(dist[i] == INF){
            alcancou_todos = false;
            break;
        }
        maior_distancia = max(maior_distancia, dist[i]);
    }

    if(!alcancou_todos){
        cout << "Impossivel chegar\n";
    } else {
        cout << "Casa mais distante a " << maior_distancia << " metros\n";
    }

    return 0;
}