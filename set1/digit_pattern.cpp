#include <iostream>
using namespace std;

int main() {
    int n, k = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(k > 0){
            for(int j = 1; j <= n; j++){
                cout << j;
            }
            k *= -1;
        }
    
        else{
            for(int j = n; j >= 1; j--){
                cout << j;
            }
            k*=-1;
        }
        cout << endl;
    }
}
