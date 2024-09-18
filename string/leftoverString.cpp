#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;

    int c = 0;
    unordered_map<char,int> mp;

    for(int i=0; i<a.size(); i++){
        mp[a[i]] = 1;
    }
    for(int i=0; i<b.size(); i++){
        if(mp.find(b[i]) != mp.end()){
            mp[b[i]] = 0;
        }
    }

    string ans = " ";
    for(int i=0; i<a.size(); i++){
        if(mp[a[i]] !=0){
            ans += a[i];
        }
    }

    cout << ans << endl;

    return 0;
}