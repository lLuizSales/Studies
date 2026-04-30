#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;

    for(int i = 0; i < a; i++){
        cin >> b;
        long long p0 = 0, p1 = 1, p;
        if(b == p0){
            cout << p0 << endl;
        }else if(b == p1){
            cout << p1 << endl;
        }else {
            for(int i = 2; i <= b; i++){
                p = 2 * p1 + p0;
                p0 = p1;
                p1 = p;
            }
            cout << p1 << endl;
        }
    }
    return 0;
}