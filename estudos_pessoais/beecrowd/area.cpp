#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double a = 0, b = 0, c = 0, pi = 3.14159;
    cin >> a >> b >> c;
    float triangle = (a * c) / 2;
    cout << "TRIANGULO: " << triangle << "\n";
    double circle = pi * pow(c, 2);
    cout << "CIRCULO: " << circle << "\n";
    float trapezium = ((a + b) * c)/2;
    cout << "TRAPEZIO: " << trapezium << "\n";
    float square = pow(b, 2);
    cout << "QUADRADO: " << square << "\n";
    float rectangule = (a * b);
    cout << "RETANGULO: " << rectangule << "\n";
    return 0;
}