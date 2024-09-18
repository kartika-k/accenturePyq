#include<iostream>
using namespace std;

void reverseStr(string& str){
    int n = str.length();

    int i=0;
    int j = n-1;

    while(i < j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout << str << " ";
}

int main(){
    string str = "Hello, World!";

    reverseStr(str);

    return 0;
}