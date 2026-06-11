#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    long long k;
    cin >> c >> k;

    queue<long long> fila;

    for(int i = 0; i < c; i++){
        
        long long t;
        cin >> t;
        fila.push(t);

        while(!fila.empty() && fila.front() < (t - k + 1)){
            fila.pop();
        }

        cout << fila.size() << (i == c - 1 ? "" : " ");
        
    }

    cout << "\n";

    return 0;
}