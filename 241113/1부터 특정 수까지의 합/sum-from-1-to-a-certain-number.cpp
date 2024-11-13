#include <iostream>
using namespace std;

int Add(int n){
    int initial=0;
    for(int i=1;i<=n;i++){
        initial=initial+i;
    }
    int fianl;
    int final=initial/10;
    return final;
}

int main() {
    int a;
    cin>>a;
    int num=Add(a);
    cout<<num;
    // 여기에 코드를 작성해주세요.
    return 0;
}