#include <iostream>
using namespace std;

void Big(int n, int m) {
	int mod=n%m;
	while(mod>0){
		n=m;
		m=mod;
		mod=n%m;
	}
	cout<<m;
}

int main() {
    int a;
	int b;
	cin >> a >> b;
	Big(a, b);
    return 0;
}