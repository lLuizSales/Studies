#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int a = 0, b = 0, c = 0, y = 0;
        cin >> a >> b >> y;
         c = (a | b);
        if((c | y) != y){
            cout << -1 << "\n";
        } else{
           c = y & (~c);
           cout << c << "\n";
        }
    }
    return 0;
}