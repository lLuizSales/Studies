#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    queue<int> fila;
    vector<int> descarte;

    for(int i = n; i >= 1; i--){
        fila.push(i);
    }

    while(fila.size() > 1){
        descarte.push_back(fila.front());
        fila.pop();
        int x = fila.front();
        fila.pop();
        fila.push(x);
    }

    cout << "Descarte: ";
    for(int j = 0; j < descarte.size(); j++){
        cout << descarte[j] << (j == descarte.size() - 1 ? "" : ", ");
    }
    cout << "\n";

    cout << "Ultima carta: " << fila.front() << "\n";

    return 0;
}