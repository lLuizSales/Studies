#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(3);

    double time, speed;
    cin >> time >> speed;

    cout << (time * speed) / 12 << "\n";

    return 0;
}