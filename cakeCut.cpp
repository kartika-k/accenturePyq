#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = (n*(n+1))/2;
    int ans = sum+1;

    cout << (ans % 1000000007);

    return 0;
}