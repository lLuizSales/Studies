#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    vector<int> vec(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> vec[i];
    }

    for(int i = 0; i < c; i++){
        
        int v;
        cin >> v;

        if(vec[1] == -1){
            cout << "NULL" << "\n";
        } else if(v == 1){
            cout << "RAIZ" << "\n";
        } else{
            cout << vec[v / 2] << "\n";
        }
    }

    return 0;
}