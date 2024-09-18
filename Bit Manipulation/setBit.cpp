#include<iostream>
#include<math.h>
using namespace std;

int setBit(int n, int set){
    int ans = 0;
    for(int i=0; i<pow(2,n); i++){
        int cnt = 0;
        int x = i;

        while(x > 0){
            if(x & 1){
                cnt++;
            }
            x = x >> 1;
        }
        if(cnt == set){
            ans += i;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    int set = 2;

    cout << setBit(n,set);

}