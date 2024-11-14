#include <iostream>
using namespace std;

int Small(int a, int b, int c){
        int min = a;
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    return min;
}

int main() {
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<Small(num1, num2, num3);
    return 0;
}