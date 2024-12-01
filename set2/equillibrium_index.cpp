#include <iostream>
using namespace std;

void equillibrium_index(int *arr,int n){
    bool eq = false;
    int left_sum, right_sum;

    for(int i = 0; i < n; i++){
        left_sum = 0;
        right_sum = 0;
        for(int j = 0; j < i; j++){
            left_sum += arr[j];
        }

        for(int j = i + 1; j < n; j++){
            right_sum += arr[j];
            eq = true;
        }
        if(left_sum == right_sum){
            cout << i+1 << endl;
            eq = true;
        }
    }
    if(!eq) cout << -1;
}




void equillibrium_index_optimized(int *arr, int n){
    int left_sum = 0, right_sum = 0;

    //right_sum across 1st element viz 0th index
    for(int i = 1; i < n; i++) right_sum+= arr[i];

    if(right_sum == 0) cout << 1 << endl;

    for(int i = 1; i < n; i++){
        left_sum += arr[i-1];
        right_sum -= arr[i];
        if(left_sum == right_sum) cout << i + 1 << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    equillibrium_index(arr, n);
    cout << endl;

    equillibrium_index_optimized(arr, n);
}