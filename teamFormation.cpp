#include<iostream>
using namespace std;

int main(){
    int exp, fresh;
    cin >> exp >> fresh;

    int ans = (exp+fresh)/4;
    if(ans <= min(exp,fresh)){
        cout << ans;
    }
    if(ans > min(exp,fresh)){
        cout << min(exp,fresh);
    }

    return 0;
}