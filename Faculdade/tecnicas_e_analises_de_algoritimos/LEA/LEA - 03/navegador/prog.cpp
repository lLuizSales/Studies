#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    int N;
    cin >> N;

    stack<string> pilha;

    for(int i = 0; i < N; i++){
        
        cin >> n;

        if(n == "<"){
            if(!pilha.empty()){
                pilha.pop();
            }
            if(pilha.empty()){
                cout << "pagina em branco" << "\n";
            } else{
                cout << pilha.top() << "\n";
            }
        } else{
            pilha.push(n);
            cout << n << "\n";
        }
    }
    

    return 0;
}