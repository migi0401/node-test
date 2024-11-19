#include <iostream>
using namespace std;

bool FindYun(int n){
    if(n%4!=0){
        return false;
    }
    if(n%100==0 && n%400 !=0){
        return false;
    }
    return true;
}

int main() {
    int a;
    cin>>a;
    if(FindYun(a)){
        cout<<"true";
    }
    else
    cout<<"false";
    // 여기에 코드를 작성해주세요.
    return 0;
}