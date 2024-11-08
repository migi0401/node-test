#include <iostream>
using namespace std;

void PrintNLines(int n){
    for(int i=0; i<n; i++){
        cout<<"12345^&*()_";
        cout<<endl;
    } 
}

int main() {
    int num;
    cin>>num;

    PrintNLines(num);
    
    return 0;
}