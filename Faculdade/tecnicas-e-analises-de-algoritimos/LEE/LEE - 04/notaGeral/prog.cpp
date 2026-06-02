#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &v, int begin, int mid, int end){
    vector<int> aux(end - begin);
    int i = begin, j = mid, k = 0;
    while (i < mid && j < end) {
        if (v[i] <= v[j]) {
            aux[k] = v[i++];
        } else {
            aux[k] = v[j++];
        }
        k++;
    }
    while (i < mid) {
        aux[k++] = v[i++];
    }
    while (j < end) {
        aux[k++] = v[j++];
    }
    for (int i = 0; i < aux.size(); i++) {
        v[begin + i] = aux[i];
    }
}

void merge_sort(vector<int> &v, int begin, int end){
    if (end - begin <= 1) {
        return;
    }
    int mid = begin + (end - begin) / 2;
    merge_sort(v, begin, mid);
    merge_sort(v, mid, end);
    merge(v, begin, mid, end);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    vector<int> notas(a);

    for(int i = 0; i < a; i++){
        cin >> notas[i];
    }

    merge_sort(notas, 0, notas.size());

    for(int i = 0; i < notas.size(); i++){
        cout << notas[i] << "\n";
    }

    return 0;
}