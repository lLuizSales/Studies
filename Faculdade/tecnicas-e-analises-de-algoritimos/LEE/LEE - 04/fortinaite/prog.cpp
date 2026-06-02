#include <iostream>
#include <vector>

using namespace std;

struct jogador {
    string nome;
    string tempo;
    int segundos;   
};

void merge(vector<jogador> &v, int begin, int mid, int end){
    vector<jogador> aux(end - begin);

    int i = begin, j = mid, k = 0;

    while(i < mid && j < end){
        if(v[i].segundos > v[j].segundos){
            aux[k] = v[i++];
        } else if(v[i].segundos == v[j].segundos){
            if(v[i].nome > v[j].nome){
                aux[k] = v[i++];
            } else{
                aux[k] = v[j++];
            }
        } else{
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

void merge_sort(vector<jogador> &v, int begin, int end){

    if(end - begin <= 1){
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
    
    int j;
    cin >> j;

    vector<jogador> v(j);

    for(int i = 0; i < j; i++){
        cin >> v[i].nome >> v[i].tempo;
        int pos = v[i].tempo.find(':');
        int min = stoi(v[i].tempo.substr(0, pos));
        int seg = stoi(v[i].tempo.substr(pos + 1));
        v[i].segundos = min * 60 + seg;
    }

    merge_sort(v, 0, v.size());

    for(int i = 0; i < v.size(); i++){
        cout << i + 1 << ". " << v[i].tempo << " - " << v[i].nome << "\n";
    }
    
    return 0;
}