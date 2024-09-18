#include<iostream>
using namespace std;

int autoBioNum(string s){
    int a[10] = {0};

    for(int i=0; i<s.length(); i++){
        a[s[i] - '0']++;
    }
    for(int i=0; i<s.length(); i++){
        if(a[i] != s[i] - '0'){
            return 0;
        }
    }
    int cnt = 0;
    for(int i=0; i<10; i++){
        if(a[i] > 0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string s;
    cin >> s;

    cout <<autoBioNum(s);
}