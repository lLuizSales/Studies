#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    map<char, int> contagem;

    while(t--){
        string r, s;
        cin >> r >> s;

        
        if(r.length() != s.length()){
            cout << "DIFERENTES\n";
            continue;
        }

        for(char c : r){
            contagem[c]++;
        }
        for(char c : s){
            contagem[c]--;
        }
        
        bool anagrama = true;
        for(auto p : contagem){
            if(p.second != 0){
                anagrama = false;
                break;
            }
        }

        cout << (anagrama ? "ANAGRAMAS" : "DIFERENTES") << "\n";
        contagem.clear();
    }

    return 0;
}