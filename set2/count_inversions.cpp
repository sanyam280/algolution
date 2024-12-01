#include <iostream>
using namespace std;

int main(){
    int n, count_invs = 0;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) cout << arr[i] << endl;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                count_invs++;
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    cout << "given array has " << count_invs << " count inversions";

}