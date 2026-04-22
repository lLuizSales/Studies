#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<string> norte, sul, leste, oeste;
    char direcao;
    string c;
    vector<string> v;


    while(cin >> c && c != "0"){
        if(c == "N" || c == "S" || c == "L" || c == "O"){
            direcao = c[0];
        } else{
            if(direcao == 'N'){
                norte.push(c);
            } else if(direcao == 'S'){
                sul.push(c);
            } else if(direcao == 'L'){
                leste.push(c);
            } else if(direcao == 'O'){
                oeste.push(c);
            }
        }

        
    }

    while(!norte.empty() || !sul.empty() || !leste.empty() || !oeste.empty()){
        if(!norte.empty()){
            v.push_back(norte.front());
            norte.pop();
        }
        if(!sul.empty()){
            v.push_back(sul.front());
            sul.pop();
        }
        if(!leste.empty()){
            v.push_back(leste.front());
            leste.pop();
        }
        if(!oeste.empty()){
            v.push_back(oeste.front());
            oeste.pop();
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(i > 0) cout << " ";
        cout << v[i];
    }
    
    return 0;
}