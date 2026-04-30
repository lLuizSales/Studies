#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d;
    while(cin >> d && d != -1){
        string n;
        cin >> n;
        int somaA = 0, somaB = 0;
        for(int i = 0; i < d; i++){
            int z = n[i] - '0';
            if(i % 2 == 0){
                somaA += z;
            } else {
                somaB += z;
            }
        }

        int result = somaA - somaB;
        string yesNot;
        if(abs(result) % 11 == 0){
            yesNot = "sim";
        } else {
            yesNot = "nao";
        }

        cout << n << ": " << somaA << " - " << somaB << " = " << result << " - " << yesNot << "\n";
    }

    return 0;
}