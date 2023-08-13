#include <iostream>
using namespace std;

int nthFibonacci(int n){
        // 0 1 1 2 3 5
	if(n <= 2) {
		return 1;
	}
	int a = 1, b = 1 , c;
	for(int i = 3; i <= n; i++) {
		c = (a + b) % 1000000007;
		a = b % 1000000007;
		b = c % 1000000007;
	}
	
	return c % 1000000007;
}

int main() {
	int n;
	cin >> n;
	
	cout<< nthFibonacci(n)<<"\n";
}
