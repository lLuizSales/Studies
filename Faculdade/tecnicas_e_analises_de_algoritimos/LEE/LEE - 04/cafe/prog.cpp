#include <iostream>
#include <vector>
#include <algorithm>

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

    int n;
    cin >> n;
    vector<int> precos(n);

    for(int i = 0; i < n; i++){
        cin >> precos[i];
    }

    merge_sort(precos, 0, precos.size());

    int p;
    cin >> p;

    for(int i = 0; i < p; i++){
        int c = 0;
        cin >> c;
        auto it = upper_bound(precos.begin(), precos.end(), c);
        int q = it - precos.begin();
        cout << q << "\n";
    }

    return 0;
}