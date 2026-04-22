#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, b;
    cin >> n >> b;
    unsigned long long a = (1ULL << b);
    for(int i = 0; i < n; i++){
        unsigned long long v = 0;
        cin >> v;
        unsigned long long r = v | a;
        cout << r << "\n";
    }
    return 0;
}