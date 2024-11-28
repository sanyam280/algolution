#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, num, first_occurence = -1;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0 ;i < n; i++) cin >> arr[i];
    cout << "find number:";
    cin >> num;

    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            first_occurence = i;
            break;
        }    
    }

    cout << first_occurence;
}