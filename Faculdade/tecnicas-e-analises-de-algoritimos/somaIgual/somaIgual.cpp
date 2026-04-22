#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, s;
        cin >> n;
        vector<int> c(n);
        for(int j = 0; j < n; j++){
            cin >> c[j];
        }
        cin >> s;
        int inicio = 0;
        int fim = n - 1;
        bool encontrei = false;
        while(inicio < fim){
            int soma = c[inicio] + c[fim];
            if(soma == s){
                encontrei = true;
                break;
            } else if(soma < s){
                inicio++;
            } else{
                fim--;
            }
        }
        if(encontrei){
            cout << "SIM" << "\n";
        } else{
            cout << "NAO" << "\n";
        }
    }
    return 0;
}