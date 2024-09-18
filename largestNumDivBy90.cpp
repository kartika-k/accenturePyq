#include<iostream>
#include<math.h>
using namespace std;

void solve(int arr[], int n){
    int count_0 = 0;
    int count_5 = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count_0++;
        }else{
            count_5++;
        }
    }
    count_5 = floor(count_5/9)*9;
    if(count_0 == 0){
        cout << -1 << endl;
    }
    else if(count_5 < 9){
        cout << 0 << endl;
    }
    while(count_5-- > 0){
        cout << 5;
    }
    while(count_0-- > 0){
        cout << 0;
    }
}

int main(){
    int arr[] = {5,5,5,5,5,5,5,5,0,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    solve(arr,n);
}