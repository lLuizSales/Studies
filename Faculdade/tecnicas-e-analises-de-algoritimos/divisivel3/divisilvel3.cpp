#include <iostream>
using namespace std;

int main(){
    int a;
    while(cin >> a && a != -1){
        string b;
        cin >> b;
        int soma = 0;
        for(char c : b){
            if(c != '.'){
            soma += (c- '0');
            }
        }
        if(soma % 3 == 0){
            cout << soma << " sim" << endl;
        } else {
            cout << soma << " nao" << endl;
        }
    }
    return 0;
}