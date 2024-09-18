#include<iostream>
using namespace std;

int checkPalindrome(string& str){

    int n = str.length();

    for(int i = 0; i < n / 2; i++){
        if(str[i] != str[n - i - 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    string str = "care";

    cout << checkPalindrome(str) << " ";

    return 0;
}