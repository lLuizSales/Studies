#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int horas = n / 3600;
    int resto = n % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    cout << horas << ":" << minutos << ":" << segundos << "\n";

    return 0;
}