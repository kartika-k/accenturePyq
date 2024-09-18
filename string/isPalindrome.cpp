#include<iostream>
using namespace std;

string isPalindrome(string s){
    int i = 0;
    int j = s.length()-1;

    while(i <= j){
        if(s[i] != s[j]){
            return "false";
        }
        i++;
        j--;
    }
    return "true";
}

int main(){
    string s;
    cin >> s;

    cout << isPalindrome(s);

    return 0;
}