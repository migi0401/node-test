#include <iostream>
using namespace std;

bool FindNum(int n) {
    if(n==1)
    return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num = 0;;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (FindNum(i)) {
            num = num + i;
        }
    }
    cout << num;
    // 여기에 코드를 작성해주세요.
    return 0;
}