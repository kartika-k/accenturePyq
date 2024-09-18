#include<iostream>
#include<math.h>
using namespace std;

int count_of_n_bulbs(int n){
    return sqrt(n);
}

int main(){
    int n;
    cin >> n;

    int ans = count_of_n_bulbs(n);
    cout << ans;

    return 0;
}