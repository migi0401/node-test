#include <iostream>
using namespace std;

void Func(int n) {
    if (n % 2 == 0) {
        int a = n / 10;
        int b = n % 10;
        if ((a + b) % 5 == 0) {
            cout << "Yes";
        }
        else
            cout << "No";
    }
    else {
        cout << "No";
    }
}

int main() {
    int num;
    cin >> num;
    Func(num);
    // 여기에 코드를 작성해주세요.
    return 0;
}