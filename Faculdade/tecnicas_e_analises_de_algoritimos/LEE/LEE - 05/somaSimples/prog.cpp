#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_set<int> set_n;

    int n, k;
    cin >> n >> k;
    
    while(n--){
        int a = 0;
        cin >> a;

        int x = k - a;

        if(set_n.count(x)){
            cout << a << " " << x << "\n";
            return 0;
        } else{
            set_n.insert(a);
        }
    }

    cout << "Nao existe\n";

    return 0;
}