#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<char, int> freq;

    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        set<char> letras;

        for(char c : s){
            letras.insert(c);
        }

        for(char c : letras){
            freq[c]++;
        }
    }

    int max = 0;

    for(auto [letra, qtd] : freq){
        if(qtd > max){
            max = qtd;
        }
    }

    cout << max << "\n";
    
    return 0;
}