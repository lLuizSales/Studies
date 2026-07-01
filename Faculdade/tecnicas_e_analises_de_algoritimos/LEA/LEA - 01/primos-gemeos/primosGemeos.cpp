#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    
    const int MAX = 1000000;
    vector<bool> primo(MAX + 1, true);

    primo[0] = primo[1] = false;

    for(int j = 2; j * j <= MAX; j++){
        if(primo[j]){
            for(int k = j * j; k <= MAX; k+=j){
                primo[k] = false;
            }
        }
    }

    for(int i = 0; i < a; i++){
        cin >> b;

        bool primoGemeo = false;

        if(primo[b]){
            
            bool e =  (b >= 2 && primo[b - 2]);
            bool d =  (b <= MAX - 2 && primo[b + 2]);
            
            if(e && d){
                primoGemeo = true;
            }
        }
        if(primoGemeo){
            cout << "O numero " << b << " eh um primo gemeo\n";
        } else{
            cout << "O numero " << b << " nao eh primo gemeo\n";
        }
    }
    return 0;
}