#include <iostream>
using namespace std;

int main(){
    int a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> a && a != -1){
        long long b;
        long long c = 0;
        for(int i = 0; i < a; i++){
            cin >> b;
            c ^= b;
        }
        cout << c << "\n";
    }
    return 0;
}