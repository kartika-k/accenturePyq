#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;    //count of set bits
    while(n){
        cnt += n & 1;
        n >>=1 ;
    }
    int ans = pow(2,cnt)-1;
    cout << ans;

    return ans;
}