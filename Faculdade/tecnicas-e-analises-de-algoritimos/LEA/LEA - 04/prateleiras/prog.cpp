#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparar(string a, string b) {
    
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    return a < b;
}

int main() {
    int N;
    cin >> N;

    vector<string> livros(N);

    for (int i = 0; i < N; i++) {
        cin >> livros[i];
    }

    sort(livros.begin(), livros.end(), comparar);

    for (string livro : livros) {
        cout << livro << "\n";
    }

    return 0;
}