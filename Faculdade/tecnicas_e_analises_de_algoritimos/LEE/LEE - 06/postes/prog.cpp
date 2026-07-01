#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visitado[205];

vector<pair<int, int>> adj[205];

int prim(int origem){
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    pq.push({0, origem});
    int custo_total = 0;

    while(!pq.empty()){
        int peso = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(visitado[u]) continue;
        visitado[u] = true;
        custo_total += peso;

        for(auto edge : adj[u]){
            int v = edge.first;
            int w = edge.second;

            if(!visitado[v]){
                pq.push({w, v});
            }
        }
    }
    return custo_total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int m, n;
        cin >> m >> n;

        for(int i = 1; i <= m; i++){
            adj[i].clear();
        }

        fill(visitado, visitado + 205, false);

        while(n--){
            int x, y, z;
            cin >> x >> y >> z;
            adj[x].push_back({y, z});
            adj[y].push_back({x, z});
        }

        int resposta = prim(1);
        cout << resposta << "\n";
    }

    return 0;
}