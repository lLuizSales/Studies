#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unsigned long long b = 0;
    unsigned long long a;

    for(int i = 0; i < n; i++){
        cin >> a;
        b |= a;
    }

    cout << b << "\n";
    
    return 0;
}