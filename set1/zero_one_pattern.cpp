#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    cout << "enter rows and columns:";
    cin >> rows >> columns;

    for(int i = 0 ; i < rows; i++){
        for(int j = 0; j < columns;j++){
            if(i == 0 || j == 0 || i == rows-1 || j == columns-1) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }


}