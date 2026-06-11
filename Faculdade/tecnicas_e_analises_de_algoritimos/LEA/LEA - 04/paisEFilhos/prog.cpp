#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int C;
    cin >> C;

    while (C--) {
        int no;
        cin >> no;

        if (N == 1 && v[0] == -1) {
            cout << "NULL\n";
            continue;
        }

        int i = no - 1;

        string pai, esq, dir;

        if (i == 0) {
            pai = "RAIZ";
        } else {
            int p = (i - 1) / 2;

            if (v[p] == -1){
                pai = "NULL";
            } else{
                pai = to_string(v[p]);
            }
        }

        int e = 2 * i + 1;

        if (e >= N || v[e] == -1){
            esq = "NULL";
        } else{
            esq = to_string(v[e]);
        }
        int d = 2 * i + 2;

        if (d >= N || v[d] == -1){
            dir = "NULL";
        } else{
            dir = to_string(v[d]);
        }
        cout << pai << " - " << esq << " " << dir << "\n";
    }

    return 0;
}