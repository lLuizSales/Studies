#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &v){
    int q = 0;
    for(int i = 0; i < v.size() - 1; i++){
        int menor = i;
        for(int j = i + 1; j < v.size(); j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        if(menor != i){
            swap(v[i], v[menor]);
            q++;
        }
    }
    for(int i = 0; i < v.size(); i++){
        if(i > 0) cout << " ";
        cout << v[i];   
    }
    cout << "\n";
    cout << q << "\n";
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

    selection_sort(v);

    return 0;
}