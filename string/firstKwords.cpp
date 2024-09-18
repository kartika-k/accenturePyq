#include<iostream>
// #include<string.h>
#include<string>
using namespace std;

string find(string s, int k){
    int cnt = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            cnt++;
            if(cnt == k){
                return s.substr(0,i);
            }
        }
    }
    return "";
}

int main(){

    string s;
    getline(cin,s);

    int k;
    cin >> k;

    cout << find(s,k);
}