//program to count total no. of negative numbers in an array

#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    int * arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < 0) count++;
    }

    cout << count;
}