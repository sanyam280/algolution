#include <iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows;
    for(int i = 0 ; i < rows; i++){
        for(int j = i + 1; j <= rows; j++){
            cout << j;
        }
        for(int k = 0 ; k < i; k++) cout << rows;
        cout << endl;
    }
}