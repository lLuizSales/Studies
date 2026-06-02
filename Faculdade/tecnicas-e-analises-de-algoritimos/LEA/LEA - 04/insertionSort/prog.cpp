#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &v){
    int i, j, x, q = 0, tmp;
    for (i = 1; i < v.size(); i++) {
        tmp = v[i];
        for (j = i; j > 0 && v[j - 1] > tmp; j--) {
            v[j] = v[j - 1];
            q++;
        }
        v[j] = tmp;
        for(x = 0; x < v.size(); x++){
            if(x > 0) cout << " ";
            cout << v[x];
        }
        cout << "\n";
    }
    cout << q;
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
     
    insertion_sort(v);

    return 0;
}