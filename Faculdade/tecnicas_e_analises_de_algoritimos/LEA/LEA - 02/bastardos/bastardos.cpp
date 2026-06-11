#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long s = a ^ b ^ c ^ d;
    long long x1 = s ^ a;
    long long x2 = s ^ b;
    long long x3 = s ^ c;
    long long x4 = s ^ d;
    cout << x1 << " " << x2 << " " << x3 << " " << x4 << "\n";
    
    return 0;
}