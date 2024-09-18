#include<iostream>
using namespace std;

int fact(int n){
    for(int i=n-1; i>1; i--){
        n = n*i;
    }
    return n;
}
int permutation(string s){
    int count[26] = {0};
    int len,res;

    len = s.length();

    for(int i=0; i<len; i++){
        count[s[i] - 'a']++;
    }
    res = fact(len);

    for(int i=0; i<26; i++){
        if(count[i] > 1){
            res = res/fact(count[i]);
        }
    }
    return res;
}

int main(){
    string str;
    cin >> str;

    cout << permutation(str);

    return 0;

}