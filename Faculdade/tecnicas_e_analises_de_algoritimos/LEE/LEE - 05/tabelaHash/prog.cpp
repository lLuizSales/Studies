#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, c, v = 0;
    cin >> m >> c;

    vector<vector<int>> tabela(m);

    while(c--){
        cin >> v;
        int idx = v % m;

        tabela[idx].push_back(v);
    }

    for(int i = 0; i < m; i++){
        cout << i << " -> ";

        for(int n : tabela[i]){
            cout << n << " -> "; 
        }

        cout << "\\\n";
    }

    return 0;
}