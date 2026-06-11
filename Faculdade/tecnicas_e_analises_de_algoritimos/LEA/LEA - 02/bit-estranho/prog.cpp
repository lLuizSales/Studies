#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        unsigned long long a = 0, b = 0, v = 0;
        cin >> a >> b;
        v = (a & b);
        int contador = __builtin_popcountll(n);
        cout << contador << "\n";
    }
    return 0;
}