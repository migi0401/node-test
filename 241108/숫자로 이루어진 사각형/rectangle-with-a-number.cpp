#include <iostream>
using namespace std;

void PrintNum(int n){
    int t=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<t<<" ";
        t++;//변수t가 계속 늘어나는 수식은 ++를 붙여주면 늘어난다!!!
        if(t==10)
        t=1;
        }
        cout<<endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin>>a;
    PrintNum(a);
    return 0;
}