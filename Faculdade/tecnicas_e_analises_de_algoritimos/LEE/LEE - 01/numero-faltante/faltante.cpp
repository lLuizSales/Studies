#include <iostream>
using namespace std;

int main(){
    int a, b;
    long long somaRecebidos = 0;
    cin >> a;
    long long somaTotal = a*(a+1)/2;
    for(int i = 0; i < (a - 1); i++){
        cin >> b;
        somaRecebidos += b;
    }
    long long faltante = somaTotal - somaRecebidos;
    cout << faltante << endl;
    // int x, y, resultado;
    // cin >> x;
    // resultado = n;
    // for(int i = 1; i <= n - 1; i++){
    // 	resultado = resultado ^ n ^ i;
    // }
    // cout << resultado << endl;
    return 0;
}
