#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    double n;
    cin >> n;

    cout << "NOTAS:\n";

    for(int i = 0; i < 6; i++){
        int qnd = (int)n / notes[i];
        cout << qnd << " nota(s) de R$ " << notes[i] << ".00\n";
        n -= qnd * notes[i];
    }

    cout << "MOEDAS:\n";

    for(int i = 0; i < 6; i++){
        n = round(n * 100) / 100;
        int qnd = (int)(n / coins[i]);
        cout << qnd << " moeda(s) de R$ " << coins[i] << "\n";
        n -= qnd * coins[i];
    }

    return 0;
}