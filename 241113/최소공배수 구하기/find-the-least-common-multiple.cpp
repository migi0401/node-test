#include <iostream>
using namespace std;

int Big(int n, int m) {
	int mod=n%m;
	while(mod!=0){
		n=m;
		m=mod;
		mod=n%m;
	}
	return m;
}

void Small(int a, int b){
	int small=(a*b)/Big(a,b);
	cout<<small;
	}

int main() {
    int j, k;
    cin>>j>>k;
	Small(j,k);
}