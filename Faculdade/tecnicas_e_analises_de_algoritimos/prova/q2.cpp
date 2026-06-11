#include <iostream>
using namespace std;

int f(int n){
	if(n == 1 || n == 2) return 1;
	return f(f(n - 1)) + f(n - f(n - 1));
}

int main(){
	
	int c, n;
	cin >> c;

	for(int i = 0; i < c; i++){
		cin >> n;
		cout << f(n) << "\n";
	}
    
	return 0;
}