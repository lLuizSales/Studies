#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, q;
    cin >> a >> q;
    vector<int> notas(a);
    for(int i = 0; i < a; i++){
        cin >> notas[i];
    }

    for(int j = 0; j < q; j++){
        int c;
        cin >> c;

        auto it = upper_bound(notas.begin(), notas.end(), c);

        int indice = it - notas.begin();

        int qnd = a - indice;
        
        cout << qnd << " notas maiores que " << c << "\n";
    }
    return 0;
}