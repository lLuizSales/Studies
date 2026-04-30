#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, b;
    cin >> n;
    unsigned long long a = 0;
    for(int i = 0; i < n; i++){
        cin >> b;
        unsigned long long c = (1ULL << b);
        a |= c;
    }
    cout << a << "\n";
    return 0;
}