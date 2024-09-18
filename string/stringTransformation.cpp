#include<iostream>
#include<string>
using namespace std;

string transformString(string& str){
    string result = str;

    for(char& c: result){
        if(c == 'a'){
            c = 'b';
        }else{
            c = 'a';
        }
    }
    return result;
}

int main(){
    string str = "abaabbcc";
    
    cout << transformString(str) << " ";

    return 0;
}
