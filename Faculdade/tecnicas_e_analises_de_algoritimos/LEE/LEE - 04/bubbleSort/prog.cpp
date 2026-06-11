#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &v){
    bool troca;
    do {
        troca = false;
        for(int i = 1; i < v.size(); i++){
            if(v[i - 1] > v[i]){
                swap(v[i - 1], v[i]);
                troca = true;
                for(int j = 0; j < v.size(); j++){
                    if(j > 0) cout << " ";
                    cout << v[j];
                }
                cout << "\n";
            }
        }
    } while(troca);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < v.size(); i++){
        if(i > 0) cout << " ";
        cout << v[i];
    }
    
    cout << "\n";

    bubble_sort(v);

    return 0;
}