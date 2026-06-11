#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n, k;
    cin >> n >> k;
    vector<int> vec_n(n);

    for(int i = 0; i < n; i++){
        cin >> vec_n[i];
    }
    
    sort(vec_n.begin(), vec_n.end());

    for(int i = 0; i < n - 2; i++){    
        int esq = i + 1;
        int dir = n - 1;

        while(esq < dir){
            int soma = vec_n[i] + vec_n[esq] + vec_n[dir];
            if(soma == k){
                cout << vec_n[i] << " " << vec_n[esq] << " " << vec_n[dir] << "\n";
                return 0;
            } else if(soma < k){
                esq++;
            } else{
                dir--;
            }
        }
    }

    cout << "Nao existe\n";

    return 0;
}