#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matriz[101][101] = {};

    int v, e, a;
    cin >> v;

    for(int i = 1; i <= v; i++){
        cin >> e;
        while(e--){
            cin >> a;
            matriz[i][a] = 1;
        }
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