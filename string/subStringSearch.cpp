#include<iostream>
using namespace std;

int stringSearch(string& str1, string& str2){
    int n = str1.length();
    int m = str2.length();


    for(int i=0; i<=n-m; i++){
        int j;
        for(j=0; j<m; j++){
            if(str2[j] != str1[i+j]){
                break;
            }
        }
        if(j == m){
            return i;
        }
    }
    return -1;
}

int main(){
    string str1 = "Hello World";
    string str2 = "World";

    cout << stringSearch(str1, str2) << " ";

    return 0;
}