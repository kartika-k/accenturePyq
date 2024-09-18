#include<iostream>
using namespace std;

int trailingZeroes(int n) {
    int cnt = 0;
    if(n < 5){
        return 0;
    }
    for(int i=5; n/i >= 1; i = i*5){
        cnt = cnt + n/i;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    cout << trailingZeroes(n);

    return 0;
}
