#include <iostream>
using namespace std;


bool pair_sum_check(int *arr, int n, int X){
     for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == X) return true;
        }
    }
    return false;    
}


bool two_sum_two_pointer(int *arr, int n, int X){
    int left = 0, right = n-1, sum;
    
    while(left < right){
        sum = arr[left] + arr[right];
        if(sum == X) return true;

        else if(sum > X) right--;

        else if(sum < X) left++;
    }
    return false;
}

int main(){
    int n, X;
    cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "enter the equivalent sum:";
    cin >> X;

    if(pair_sum_check(arr, n, X)) cout << "YES";
    else cout << "NO";

    cout << endl;

    cout << two_sum_two_pointer(arr, n, X);

    


    
}