#include <iostream>
using namespace std;

int main(){
    int n1, n2,n3;
    cin >> n1;
    int *arr1 = new int[n1];
    for(int i = 0 ; i < n1; i++) cin >> arr1[i];

    cin >> n2;
    int *arr2 = new int[n2];
    for(int i = 0 ;i < n2; i++) cin >> arr2[i];

    n3 = n1 + n2;
    int *arr3 = new int[n3];

    
    for(int i = 0 ; i < n1; i++){
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < n2;i++){
        arr3[n1+i] = arr2[i];
    }


    cout << "the merged array is:" << endl;

    for(int i = 0 ;i < n3;i++) cout << arr3[i] << ", ";
    // for(int num: arr3){
    //     cout << num << ", ";
    // }
}