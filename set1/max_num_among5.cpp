#include <iostream>
using namespace std;

int main(){
    int n = 5, max;
    int arr[5] = {};

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    max = arr[0];
    for(int i =1 ; i <5; i++){
        if(arr[i] > max) max = arr[i];
    }


    cout << max;
}