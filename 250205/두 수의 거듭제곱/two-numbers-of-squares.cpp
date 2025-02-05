#include <iostream>

using namespace std;

int f(int a, int b){
    int c=1;
    for(int i=1;i<=b;i++){
        c=c*a;
    }
    return c;
}

int main() {
    int a,b;
    cin >> a >> b;
    int p = f(a,b);
    cout<<p<<endl;
    // Write your code here!

    return 0;
}