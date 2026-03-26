#include <iostream>
using namespace std; 

int main(){
    int a, b;

    cin >> b;

    for(int i = 0; i < b; i++){
        cin >> a;
        bool primo = true;

        if(a <= 1){
            primo = false;
        } else {
            for(int j = 2; j * j <= a; j++){
                if(a % j == 0){
                    primo = false;
                    break;
                }
            }
        }

        if(primo){
            cout << "o numero " << a << " eh primo\n";
        } else{
            cout << "o numero " << a << " nao eh primo\n";
        }
    }

    return 0;
}