

#include <iostream>
using namespace std;


//30mins for sliding window
int sliding_window(int *arr, int n, int k){
    int max_sum = 0, sum = 0;
    for(int i = 0; i < k; i++){
        max_sum += arr[i];
    }
    sum = max_sum;
    for(int i = k; i < n; i++){
        sum += arr[i] - arr[i - k];
        if(sum > max_sum) max_sum = sum;
    }
    return max_sum;
}


int main(){
    int n, k;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "enter the value of k:";
    cin >> k;

    cout << sliding_window(arr, n, k);
}