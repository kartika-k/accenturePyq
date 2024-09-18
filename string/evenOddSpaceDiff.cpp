#include<iostream>
#include<string>
using namespace std;

void solve(string s1, string s2){
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i=0; i<s1.length(); i++){
        if(s1[i] == ' '){
            cnt1++;
        }
    }
    for(int i=0; i<s2.length(); i++){
        if(s2[i] == ' '){
            cnt2++;
        }
    }
    int diff = abs(cnt1 - cnt2);
    if(diff % 2 == 0){
        cout << "even:"<< diff;
    }else{
        cout << "odd:" << diff;
    }
}

int main(){
    string s1 = "abc bcd cda";
    string s2 = "abcbc";

    solve(s1, s2);
}