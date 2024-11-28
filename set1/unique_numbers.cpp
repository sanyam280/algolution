//program for frquency count, tell no of duplicates, and display unique elements

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, max, duplicates = 0;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    max = arr[0];
    for(int i = 1 ; i < n; i++){
        if(arr[i] > max) max = arr[i];
    }

    cout << max << endl;
    int * frequency_count = new int[(max+1)]();
    
    cout << "count is: " << endl;
    for(int i = 0; i < n; i++){
        frequency_count[arr[i]]++;
    }


    for(int i = 0; i < max+1; i++){
        cout << i << ": ";
        cout<< frequency_count[i] << endl;  
    }

    cout << "unique numbers are: " << endl;
    for(int i = 0; i < max+1; i++){
        if(frequency_count[i] == 1)  cout << i << endl;
        else if(frequency_count[i] > 1) duplicates++;
    }

    cout << "no of duplicates are: " << duplicates << endl;


}