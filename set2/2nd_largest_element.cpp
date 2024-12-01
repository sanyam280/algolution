#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, max1, max2; 
    cin >> n; 

    int *arr = new int[n];

    for(int i = 0; i < n; i++) cin >> arr[i];
    
    max1 = INT_MIN;
    max2 = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] < max1 && arr[i] > max2) max2 = arr[i];
    }

    cout << max1 << " " << max2; 



}