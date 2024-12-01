#include <iostream>
using namespace std;

//naive
int largest_sum_subarray(int *arr, int n){
    int max_sum = arr[0], sum = 0; 
    
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = i; j < n; j++){ 
            sum += arr[j];
            if(sum > max_sum) max_sum = sum;
        }
    }
    return max_sum;
}

int main(){
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << largest_sum_subarray(arr, n);
}
