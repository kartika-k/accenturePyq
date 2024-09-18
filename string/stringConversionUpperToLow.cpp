#include<iostream>
using namespace std;

string convert(string& s){
    int upCount = 0, lowCount = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upCount++;
        } else {
            lowCount++;
        }
    }
    if(upCount > lowCount){
        for (auto& x : s) {
            x = toupper(x);
        }
    } else {
        for (auto& x : s) {
            x = tolower(x);
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    cout << convert(s);
    return 0;
}
