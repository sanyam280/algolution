#include <iostream>
using namespace std;

int main(){
    string str, refined_str = "", reverse = "";
    getline(cin, str);

    for(int i = 0;i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            refined_str += str[i];
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') refined_str += char(str[i] + abs('A' - 'a'));
    }

    for(int i = refined_str.length() -1; i >= 0; i--) reverse += refined_str[i];
    // cout << refined_str << endl;
    // cout << reverse;

    if(refined_str == reverse) 
    cout << "Yes, the phase is Palindrome!";
    
    else cout << "Not a palindrome Phase";
}