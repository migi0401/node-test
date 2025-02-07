#include <iostream>

using namespace std;


void Fun(int a, int b) {
    if (a == 2) {
        if ((29<=b)&&(b<=31)) {
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    if ((a == 4) || (a == 6) || (a == 9) || (a == 11)) {
        if (b >= 31) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    else if ((a == 1) || (a != 2)) {
        if ((b >= 1) && (b <= 31)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

int main() {
    int M, D;
    cin >> M >> D;
    Fun(M, D);
    // Write your code here!

    return 0;
}