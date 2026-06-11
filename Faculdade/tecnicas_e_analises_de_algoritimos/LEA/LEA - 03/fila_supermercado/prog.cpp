#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string fila;
    queue<string> comum, preferencial;

    while(cin >> fila && fila != "fim"){

        if(fila == "comum"){
            comum.push(fila);
        } else{
            preferencial.push(fila);
        }

    }

    while(!comum.empty() || !preferencial.empty()){
        if(!comum.empty()){
            cout << comum.front() << "\n";
            comum.pop();
        }

        for(int i = 0; i < 2; i++){
             if(!preferencial.empty()){
                cout << preferencial.front() << "\n";
                preferencial.pop();
            }
        }
    }

    return 0;
}