#include<iostream>
using namespace std;

bool isAlmostLucky(int n){

    int luckyNum[] = {4,7,47,74,44,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<sizeof(luckyNum)/sizeof(luckyNum[0]); i++){
        if(n % luckyNum[i] == 0){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;

    cout << isAlmostLucky(n);
}