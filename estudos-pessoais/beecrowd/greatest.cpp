#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int maiorAB = (a + b + abs(a - b))/2;
    int maiorDeTodos = (maiorAB + c + abs(maiorAB - c))/2;
    cout << maiorDeTodos << " eh o maior" << "\n";
    return 0;
}