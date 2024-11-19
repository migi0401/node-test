#include <iostream>
using namespace std;

bool JudgeNum(int m) {
    while (m > 0) {
        if (m % 10 == 3 || m % 10 == 6 || m % 10 == 9)
            return true;
        m = m / 10;
    }
    return false;
}

bool FindNum(int n) {
    return n % 3 == 0 || JudgeNum(n);
}

int main() {
    int num = 0;;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (FindNum(i)) {
            num++;
        }
    }
    cout << num;
    return 0;
}