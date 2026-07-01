#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v, c, a, b;
    cin >> v >> c;

    int matriz[101][101] = {};

    while(c--){
        cin >> a >> b;
        matriz[a][b] = 1;
        matriz[b][a] = 1;
    }

    for(int i = 1; i <= v; i++){
        for(int j = 1; j <= v; j++){
            if(j > 1) cout << " ";
            cout << matriz[i][j];
        }
        cout << "\n";
    }

    return 0;
}