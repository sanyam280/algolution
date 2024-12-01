#include <iostream>
using namespace std;


int max_profit(int *arr, int n){
    int max_diff = 0;
    int diff = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            diff = arr[j] - arr[i];
            if(diff > max_diff) max_diff = diff;
        }
    }
    return max_diff;
}


// int max_profit_optimized(int *arr, int n){
     
// }

int main(){
    int n;
    cin >> n;

    int *prices = new int[n];
    for(int i =0 ; i < n; i++) cin >> prices[i];

    cout << max_profit(prices, n);
}