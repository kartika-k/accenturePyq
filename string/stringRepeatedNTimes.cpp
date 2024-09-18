#include<iostream>
using namespace std;

string solve(int n, string s){
    string ans = "";

    while(n--){
        ans += s;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << solve(n,s);
}