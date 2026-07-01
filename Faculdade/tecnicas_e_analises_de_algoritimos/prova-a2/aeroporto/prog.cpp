#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, v, maximo = 0;
    cin >> a >> v;

    vector<int> freq(a + 1, 0);

    for(int i = 0; i < v; i++){
        int x, y;
        cin >> x >> y;
        
        freq[x]++;
        freq[y]++;

        maximo = max(maximo, freq[x]);
        maximo = max(maximo, freq[y]);

    }

    for(int i = a; i >= 1; i--){
        if(freq[i] == maximo){
            cout << i << "\n";
        }
    }


    return 0;
}