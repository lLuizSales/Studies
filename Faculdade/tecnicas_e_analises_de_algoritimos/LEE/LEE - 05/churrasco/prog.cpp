#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> itens;

    int a;
    cin >> a;
    while(a--){
        int p = 0;
        cin >> p;
        while(p--){
            string s;
            cin >> s;
            if(!itens.count(s)){
                cout << "adicionando " << s << "\n";
                itens.insert(s);
            } else {
                cout << s << " ja tem\n";
            }
        }
    }

    cout << "Itens do churrasco:\n";
    for(string s : itens){
        cout << s << "\n";
    }

    return 0;
}