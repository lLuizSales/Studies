#include <iostream>
using namespace std;

int main() {
    int C, Q;
    cin >> C >> Q;

    int freq[1001] = {0};

    for (int i = 0; i < C; i++) {
        int A, B;
        cin >> A >> B;

        for (int j = A; j <= B; j++) {
            freq[j]++;
        }
    }

    for (int i = 0; i < Q; i++) {
        int P;
        cin >> P;

        if (freq[P] == 0) {
            cout << "Nao contem parafusos do tipo " << P << endl;
        } else {
            cout << "Contem " << freq[P] << " parafuso(s) do tipo " << P << endl;
        }
    }

    return 0;
}