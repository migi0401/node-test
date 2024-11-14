#include <iostream>
using namespace std;

bool FindTh(int n) {
    int a = n % 10;
    if (a == 3 || a == 6 || a == 9) {
        return true;
    }
    int b = n / 10;
    if (b == 3 || b == 6 || b == 9) {
        return true;
    }
    else
    return false;
}

int main() {
    int j, k;
    cin >> j >> k;
    int Num = 0;
    for (int i=j; i <= k; i++) {
        if (FindTh(i) || i%3==0) {
            Num++;
        }
    }
    cout << Num;
    return 0;
}