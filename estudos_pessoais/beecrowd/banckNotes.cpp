#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    cout << n << "\n";

    for(int i = 0; i < 7; i++){
        cout << n / notas[i] << " nota(s) de R$ " << notas[i] << ",00\n";
        n %= notas[i];
    }

    return 0;
}