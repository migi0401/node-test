#include <iostream>
using namespace std;

int Small(int a, int b, int c){
    if(a>b&&a>c){
        if(b>c){
            cout<<c;
        }
        if(b<c){
            cout<<b;
        }
    }
    if(b>a&&b>c){
        if(a>c){
            cout<<c;
        }
        if(a<c){
            cout<<a;
        }
    }
    if(c>a&&c>b){
        if(a>b){
            cout<<b;
        }
        if(a<b){
            cout<<a;
        }
    }
    return 0;
}

int main() {
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    Small(num1, num2, num3);
    return 0;
}