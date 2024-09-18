#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

string func(string s){
    string res = " ";
    vector<int> v(26,0);

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int x = s[i] - 97;

        v[x]++;
    }
    for(int i=0; i<26; i++){
        if(v[i] == 0){
            continue;
        }
        res = res + char(i + 97);
        res = res + ":";

        for(int j=0; j<v[i]; j++){
            res = res + "$";
        }
        res = res + ",";
    }
    string ans = res.substr(0,res.length()-1);

    return ans;
}

int main(){
    string s;
    cin >> s;

    cout << func(s);

    return 0;
}