#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = n *(3*n+1)/2;
    cout << ans;
}

// i/p : 1 ---> o/p ---> 2
//i/p: 2 ---> 7
//i/p: 3---> 15

// 2,7,15-----
// diff: 5,8,11---
// diff: 3,3,3...
