#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> rev_arr(n);

    for(int i = 0 ;i < n; i++){
        cin >> arr[i];
    }
    cout << "original array:" << endl;

    for(int i = 0; i < n; i++){
        // cout << arr[i] << ", ";
        rev_arr[n-i-1] = arr[i];
    }
    cout << endl;

    cout << "reversed array:" << endl;
    
    for(auto num: rev_arr) cout << num << " ";




    
    
    



    
}