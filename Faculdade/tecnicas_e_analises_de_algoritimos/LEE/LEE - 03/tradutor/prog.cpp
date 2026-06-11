#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    stack<char> pilha;
    
    for(char c : s){
        if(c == '(' || c == '[' || c == '{'){
            pilha.push(c);
        }

        if(c == ')'){
            if(pilha.empty() || pilha.top() != '('){
                cout << "SyntaxError" << "\n"; 
                return 0;
            } else{
                pilha.pop();
            }
        }
        
        if(c == ']'){
            if(pilha.empty() || pilha.top() != '['){
                cout << "SyntaxError" << "\n"; 
                return 0;
            } else{
                pilha.pop();
            }
        }
        
        if(c == '}'){
            if(pilha.empty() || pilha.top() != '{'){
                cout << "SyntaxError" << "\n";
                return 0;
            } else{
                pilha.pop();
            }
        } 
    }

    if(pilha.empty()){ 
        cout << "OK" << "\n";
    } else{
        cout << "SyntaxError" << "\n";
    }
    
    return 0;
}