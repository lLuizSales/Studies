#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int days;
    cin >> days;

    int year = days / 365;
    int resto = days % 365;
    int month = resto / 30;
    int day = resto % 30;
    
    cout << year << " ano(s)\n";
    cout << month << " mes(es)\n";
    cout << day << " dia(s)\n";

    return 0;
}