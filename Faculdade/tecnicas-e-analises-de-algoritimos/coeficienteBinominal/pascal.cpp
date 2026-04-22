#include <iostream>
#include <stdio.h>
using namespace std;

int pascal(int n, int k){
    if(k == 0 || k == n){
        return 1;
    } else{
        return pascal((n - 1), (k - 1)) + pascal((n - 1), k);
    }
}

int main(){
    int n, k, c;
    
    while(cin >> n >> k && n != -1 &&  k != -1){
        c = pascal(n, k);   
        printf("C(%d, %d) = %d\n", n, k, c);
    }
    return 0;
}