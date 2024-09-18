#include<iostream>
using namespace std;

string isAmstrngNum(int n){
    int temp = n;
    int sum = 0;

    while(n){
        int lastDig = n%10;
        sum += (lastDig*lastDig*lastDig);
        n = n/10;

        if(temp == sum){
            return "yes";
        }
    }
    return "no";
}

int main(){
    int n;
    cin >> n;

    cout << isAmstrngNum(n);
}