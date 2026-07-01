#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int a;
    map<string, int> perfil;

    while(cin >> s >> a && s != "fim" && a != 0){
        if(!perfil.count(s)){
            cout << s << " eh reu primario\n";
            perfil.insert({s, 1});
        } else{
            cout << s << " eh reincidente com " << perfil[s]++ << " crime(s)\n";
        }
    }

    return 0;
}