#include<iostream>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    int j=0, index=1;   //1- based indexing

    for(int i=0; i<t.size(); i++){
        if(t[i] == s[j]){
            index++;
            j++;
        }
    }
    cout << index;

    return 0;
}