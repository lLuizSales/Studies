#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n = 0;
    int q, x;
    cin >> n >> q;
    for(int i = 0; i < q; i++){
        int c = 0;
        cin >> c;
        x = (n >> c) & 1;
        if(x == 1){
            cout << "acesa" << "\n";
        } else {
            cout << "apagada" << "\n";
        }
    }
    return 0;
}