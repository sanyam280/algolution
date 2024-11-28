#include <iostream>
#include <cmath>
using namespace std;

void print_diamond(int n){
    if(n % 2 == 0){
        cout << "can't generate diamond for even values";
        return;
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            if(j >= abs((n%2+1)-i)  && j <= abs((n%2+1)+i)) cout << "*";
            else cout << "?";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    print_diamond(n);
}