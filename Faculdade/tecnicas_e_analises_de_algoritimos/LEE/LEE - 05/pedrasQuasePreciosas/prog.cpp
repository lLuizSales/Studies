#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    unordered_set<char> pedras;

    while(t--){
        string c, p;
        cin >> c >> p;
        int z = 0;

        for(char x : c){
            pedras.insert(x);
        }

        for(char x : p){
            if(pedras.count(x)){
                z++;
            }
        }

        cout << "Contem " << z << " pedras negociaveis\n";
        pedras.clear();
    }

    return 0;
}