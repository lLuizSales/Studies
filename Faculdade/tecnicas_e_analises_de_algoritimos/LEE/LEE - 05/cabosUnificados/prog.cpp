#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> cabos;

    int n, c, custo_total = 0;
    cin >> n;

    while(n--){
        cin >> c;
        cabos.push(c);
    }

    while(cabos.size() > 1){
        int c1 = cabos.top();
        cabos.pop();
        int c2 = cabos.top();
        cabos.pop();

        custo_total += c2;

        cabos.push(c1 + c2);
    }

    cout << custo_total << "\n";

    return 0;
}