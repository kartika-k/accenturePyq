#include<iostream>
using namespace std;

bool anagram(string s, string t){
    int freq[26] = {};

    if(s.length() != t.length()){
        return false;
    }
    for(int i=0; i<s.size(); i++){
        freq[s[i]]++;
    }
    for(int i=0; i<t.size(); i++){
        freq[t[i]]--;
    }
    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s, t;
    s = "anagram";
    t = "nagaram";

    cout << anagram(s,t);

    return 0;
}