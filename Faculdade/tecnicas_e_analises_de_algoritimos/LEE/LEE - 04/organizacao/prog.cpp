#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<string> &v){
    int i, j;
    string tmp;
    for (i = 1; i < v.size(); i++) {
        tmp = v[i];
        for (j = i; j > 0 && v[j - 1].size() > tmp.size(); j--) {
            v[j] = v[j - 1];
        }
        v[j] = tmp;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        
        int n;
        cin >> n;
        vector<string> pecas(n);

        for(int j = 0; j < n; j++){
            cin >> pecas[j];
        }

        insertion_sort(pecas);
        
        for(int j = 0; j < pecas.size(); j++){
            if(j > 0) cout << " ";
            cout << pecas[j];
        }

        cout << "\n";
    }
    return 0;
}