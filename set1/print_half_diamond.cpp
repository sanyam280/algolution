#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n; 
    cin >> n;

    for(int i = 1; i <= 2*n-1; i++){
        for(int j = 1; j <= (n- abs(n-i)); j++){
            cout << "*";
        }
        cout << endl;   
    }

}