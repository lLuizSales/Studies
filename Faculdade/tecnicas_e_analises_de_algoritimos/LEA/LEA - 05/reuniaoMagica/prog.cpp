#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string r, s;
        cin >> r >> s;
        
        set<char> p1;
        set<char> repetidas;

        for(char c : r){
            p1.insert(c);
        }

        for(char c : s){
            if(p1.count(c)){
                repetidas.insert(c);
            }
        }

        if(repetidas.empty()){
            cout << "Baralhos prontos para o duelo";
        } else{
            for(char c : repetidas){
                cout << c;
            }
        }
        cout << "\n";
    }

    return 0;
}