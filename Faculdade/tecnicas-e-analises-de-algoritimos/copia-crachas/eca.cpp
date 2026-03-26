#include <iostream>
using namespace std;

int main(){
    int n, p;
    while(cin >> n >> p && n != -1 && p != -1){

        int z[1001] = {0};
        int c;
        int clone = 0;

        for(int i = 0; i < p; i++){
            cin >> c;
            z[c]++;
        }
    
        for(int i = 1; i <= n; i++){
            if(z[i] > 1){
                clone++;
            }
        }

        cout << clone << endl;
    }

    return 0;
}