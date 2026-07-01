#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string m, n;
    int t, l;
    cin >> t;
    
    unordered_set<string> arquivo;

    while(t--){
        int i = 0;
        cin >> l;
        while(l--){
            cin >> m >> n;
            string a = m + "#" + n;
            if(arquivo.count(a)){
                i++;
            }
            arquivo.insert(a);
        }
        if(i >= 1){
            cout << "Corrompido com " << i << " erro(s)\n";
        } else{
            cout << "Arquivo OK\n";
        }
        arquivo.clear();
    }
    return 0;
}