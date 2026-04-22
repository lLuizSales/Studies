#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        unsigned long long n = 0, m = 0;
        int p = 0;
        cin >> n >> m >> p;
        unsigned long long bit_n = (n >> p) & 1ULL;
        unsigned long long bit_m = (m >> p) & 1ULL;
        
        if(bit_m != bit_n){
            unsigned long long a = (1ULL << p);
            n ^= a;
            m ^= a;
        }
        cout << n << " " << m << "\n";
    }
    return 0;
}